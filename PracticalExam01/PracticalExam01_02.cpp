#include<iostream>
#include<string>
using namespace std;

int main(){
	int r = 0, n = 0 , k = 0, i = 0, temp = 0 ;
	cout << "Enter n: ";
	cin >> n;
	temp = n;
	cout << "Enter k: ";
	cin >> k;
	while(r<n){
		cout<<"-";
		r++;
	}
	r = 0;
	i = n*n;
	cout<<endl;
	
	while(i>0){
		if(i%k == 0){
			cout << "o";
		}
		else{
			cout << "x";
		}
		if(n == 1 || i%n == 1){
			cout << endl;
		}
			i--;
		
	}
	
	while(r<temp){
		cout<<"-";
		r++;
	}	
		
	
	return 0 ;
		
	}