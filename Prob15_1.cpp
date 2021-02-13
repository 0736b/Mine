#include<iostream>
using namespace std;

int sumNonZero(int *,int **,int **);


int main(){
int A[] = {0,0,0,0,0,1,3,2,1,1,0,0,0,1,6,9,0,0,0,1,1,0,0};
int sum;
int *start, *end;
sum = sumNonZero(A,&start,&end);
cout << "sum = " << sum << "\n";
cout << "start = " << start << "\n" ;
cout << "end = " << end << "\n";
cout << "length = " << end-start+1 << "\n";
cout <<"--------------------------------------\n";
sum = sumNonZero(end+1,&start,&end);
cout << "sum = " << sum << "\n";
cout << "start = " << start << "\n" ;
cout << "end = " << end << "\n";
cout << "length = " << end-start+1 << "\n";
cout <<"--------------------------------------\n";
sum = sumNonZero(end+1,&start,&end);
cout << "sum = " << sum << "\n";
cout << "start = " << start << "\n" ;
cout << "end = " << end << "\n";
cout << "length = " << end-start+1 << "\n";
cout <<"--------------------------------------\n";
}

int sumNonZero(int *d,int **s,int **e){
	int sum = 0;
	int i = 0;
	int start = 0, end = 0;
	*s = d;
	
	for(i; i<1000; i++){
		if(*(d+i) != 0){
			break;
		}
	}
	start = i;
	*s = (d+i);
	
	for(i; i<1000; i++){
		if(*(d+i) == 0){
			break;
		}
	}
	i = i-1;
	end = i;
	*e = (d+i);
	
	for(start; start <= end; start++){
		sum+= *(d + start);
	}
	return sum;
}
