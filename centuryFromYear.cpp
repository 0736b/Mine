/*
Given a year, return the century it is in. The first century spans from the year 1 
up to and including the year 100, the second - from the year 101 up to and including
 the year 200, etc.
*/

#include<iostream>
#include<string>
using namespace std;

int centuryFromYear(int year) {
int i=year/100;
int ans;

if(year%100!=0){
    i = i+1;
    ans = i;
}
else if(year%100==0){
    ans = year/100;
}
else if(year<101){
    ans = 0;
}
return ans;
}
//testcase
int main(){
    cout<< centuryFromYear(1905);
}
