/*A palindrome is a word, number, phrase, or other sequence of characters 
which reads the same backward as forward, such as madam, racecar.*/

#include<iostream>
#include<string>
using namespace std;

bool checkPalindrome(string inputString){
    string text1="",text2="";
    text1 = inputString;
    text2 = inputString;
    unsigned int length1=0,i=0,ans=1;
    length1 = text1.size();
    
    while(i!=length1-1){
        if(text2[i]==text1[length1-1-i]){
            ans = ans+1;
        }
        i++;
        
    }
    
    if(ans==length1){
        return true;
    }
    else{
        return false;
    }
}
