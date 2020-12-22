#include<iostream>
#include<string>
using namespace std;


string checkDangAvailability(int timeI1,int timeI2, string I3, int timeF1, int timeF2, string F3){
	int DangWang = 0;
	string Ans1= "Yes",Ans2 = "No";
	
	if(timeI2%60==0){
		timeI1++;
	}
	
	if(timeI1 == 8 && timeI2 >= 30 && I3 == "AM"){
		if(timeF1 == 8 && timeF2 >=30 && F3 == "AM"){
			DangWang = 1;
		}
		else if(timeF1>8 && timeF1<=12 && timeF2>=0 && "AM"){
			DangWang = 1;
		}
		else if(timeF1==6 && timeF2 > 30 && F3 =="PM"){
			DangWang = 0;
		}
		else if(timeF1>=0 && timeF1<=6 && timeF2 >=0 && F3 == "PM")
		{
			DangWang = 1;
		}
	}
	
	else if(timeI1 > 8 && timeI2 >= 0 && I3 == "AM"){
		if(timeF1 == 8 && timeF2 >=30 && F3 == "AM"){
			DangWang = 1;
		}
		else if(timeF1>8 && timeF1<=12 && timeF2>=0 && "AM"){
			DangWang = 1;
		}
		else if(timeF1==6 && timeF2 >= 30 && F3 =="PM"){
			DangWang = 0;
		}
		else if(timeF1>=0 && timeF1<6 && timeF2 >=0 && F3 == "PM")
		{
			DangWang = 1;
		}
	}
	
	//  PM                             //
	
	else if(timeI1 >= 0 && timeI2>=0 && I3 == "PM"){
		if(timeF1==6 && timeF2 > 30 && F3 =="PM"){
			DangWang = 0;
		}
		else if(timeF1==6 && timeF2 <=30 && F3 == "PM"){
			DangWang = 1;
		}
		else if(timeF1>=0 && timeF1<6 && timeF2 >=0 && F3 == "PM")
		{
			DangWang = 1;
		}
		
	}
	
	if(DangWang==1){
		return Ans1;
	}
	else{
		return Ans2;
	}
}

int main(){
	
cout << checkDangAvailability(10,25,"AM",12,45,"AM") << endl;

cout << checkDangAvailability(8,25,"AM",1,0,"PM") << endl;

cout << checkDangAvailability(8,45,"AM",1,0,"PM") << endl;

cout << checkDangAvailability(6,0,"AM",8,0,"AM") << endl;

cout << checkDangAvailability(5,0,"PM",6,20,"PM") << endl;

cout << checkDangAvailability(8,30,"AM",6,30,"PM") << endl;

cout << checkDangAvailability(8,30,"AM",8,31,"AM") << endl;

cout << checkDangAvailability(3,50,"PM",7,0,"PM") << endl;

cout << checkDangAvailability(8,30,"AM",6,31,"PM");
return 0;
}