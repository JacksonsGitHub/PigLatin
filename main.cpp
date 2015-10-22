/* 
 * File:   main.cpp
 * Author: jblake
 *
 * Created on September 17, 2015, 4:36 PM
 */

#include <cstdlib>
#include <iostream>
#include <cstring>

using namespace std;
bool isVowel(char ch){
switch(ch){
    case 'a' :
    case 'e' :
    case 'i' :
    case 'o' :
    case 'u' :
    case 'y' :
    case 'A' :
    case 'E' :
    case 'I' :
    case 'O' :
    case 'U' :
    case 'Y' :
    return true;    
    default: return false;
        }
}
string rotate(string pStr){
    /*int leng = pStr.length();
    string pStr1;
    pStr1 = pStr.substr(0, leng -1) + pStr[0];
    return pStr1;
    */
    for(int i = 1; i < pStr.size(); i++)
        swap(pStr[i-1],pStr[i]);
    return pStr;
}
string pigLatinString(string pStr){
    if (isVowel(pStr[0])){
        pStr = pStr + "-way";
                                                   
    return pStr;
    }
                                                   
    else {
        pStr = pStr + "-";
           for (int i = 0; i < pStr.size(); i++){
               if(isVowel(pStr[0])){
                   pStr = pStr + "ay";
                   return pStr;
               } else
        pStr = rotate(pStr);
            }
    }
    return pStr + "way";
    
}
         // string win = 

            //string win = money2 + "-" + pStr + "ay";
            
              //      return win;
        
        //return money2;

/*
 * 
 */
int main() {
    while(1){
    string word;
    cout << "Input a string or type q to quit the program: ";
    cin >> word;
    if (word == "q")
        break;
    string result  = pigLatinString(word);
    cout<< "Original: " << word   << endl;
    cout<<"Pig Latin: " << result << endl;
    
/*    for (int i = 48; i < 126; i++){
        char c = i;
        cout << c << " " << isVowel(c) << endl;
    }*/
    }
    
         return 0;
}
