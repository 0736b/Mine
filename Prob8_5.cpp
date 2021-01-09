#include<iostream>
using namespace std;

void printPattern2(int N){
	int column=0,row=0,temp=0;
	column = N;
	row = N;
	temp = N;
	
	if(N > 0){
	
			for(int j = 1; j <= column; j++){
			temp = 0;
			int maxJ = j;
			int xmany = 0;
			do{
				cout<< "O";
				temp++;
			}while(temp<maxJ);
			while(xmany < column-j){
				cout<< "X";
				xmany++;
			}
			cout <<endl;
		}
	
	}
else cout << "Invalid input";
}


int main(){
	printPattern2(3);
	cout << endl;
	printPattern2(4);
	cout << endl;
	printPattern2(5);
	cout << endl;
	printPattern2(0);
	cout << endl;
	printPattern2(-1);
	cout << endl;
	
	return 0;
}
