#include<iostream>
using namespace std;

void printPattern1(int N, int M){
int k = 0, checki=0;
if(N > 0 && M > 0){
	for(int i = 0; i<N; i++){
		checki = i;
		for(int j=0; j<M; j++){
		if(checki%2==0){
			if(k%2 == 0){
				cout <<"O";
			}
			else{
				cout << "X";
			}
		}
		else{
			if(k%2 == 0){
				cout <<"X";
			}
			else{
				cout << "O";
		}		
		}
			k++;		
	}
			k=0;
			cout << endl;
	}
}
else{
	cout << "Invalid input";
}
}


int main(){
	printPattern1(2,2);
	cout << endl << endl;
	printPattern1(3,5);
	cout << endl << endl;
	printPattern1(5,3);
	cout << endl << endl;
	printPattern1(0,3);
	cout << endl << endl;
	printPattern1(7,-1);
	
	return 0;
}
