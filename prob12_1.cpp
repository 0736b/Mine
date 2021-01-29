#include <iostream>
using namespace std;

template <typename T>
void insert(const T [], T [], int, T, int);

int main(){
	int N = 4;
	int x[N] = {1,4,9,7}, y[N+1], z[N+1];
	
	insert(x,y,N,69,2);
	insert(x,z,N,77,0);
	
	cout << "x = ";
	for(int i = 0; i < N; i++) cout << x[i] <<" ";
	
	cout << "\ny = ";
	for(int i = 0; i < N+1; i++) cout << y[i] << " ";
	
	cout << "\nz = ";
	for(int i = 0; i < N+1; i++) cout << z[i] << " ";
	
	return 0;
}
template <typename T>
void insert(const T x[], T array[], int N, T add, int at){
	for(int i = 0; i< N; i++){
		array[i] = x[i];
	}
	array[at] = add;
	for(int j = at+1; j<N+1; j++){
		array[j] = x[j-1];
	}
}
