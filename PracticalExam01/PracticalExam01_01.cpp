#include<iostream>
#include<string>
using namespace std;
string hideVowels(string inputText){
	int lengthText = inputText.size();
	int n = 0;
	while(n<lengthText){
		if(inputText[n]=='a' ||inputText[n]=='e' ||inputText[n]=='i' ||inputText[n]=='o' ||inputText[n]=='u' ){
			inputText[n] = '_';
		}
		if(inputText[n]=='A' ||inputText[n]=='E' ||inputText[n]=='I' ||inputText[n]=='O' ||inputText[n]=='U'){
			
			inputText[n] = '_';	
		}
		n++;
	}
	return inputText;	
}

int main(){	
	cout<<hideVowels("HELLO WORLD");
	return 0;
	
}
