#include<iostream>
#include<math.h>
#include<fstream>
#include<iomanip>
using namespace std;
int main(){
	int i,j,k,n;
	double x[n]={},xd[n]={},yd[n]={},y[n]={},x2[n]={},xy[n]={},addx=0,addy=0,addx2=0,addxy=0;
	ifstream fin("in.txt");
	
	ofstream fans("ans.txt");
	if (fin.is_open()) {
		fin>>n;
	}
	
	
	for (i = 0; i < n; ++i) {
		fin>>x[i];
		cout<<x[i];
	}	cout<<"\n";
	
	for (i = n; i < n+n; ++i) {
		fin>>y[i];
		cout<<y[i];
	}	cout<<"\n";
		
	for (i = 0; i < n; ++i) {
		x2[i]=x[i]*x[i];
		cout<<x2[i];
	}	cout<<"\n";
	for (i = 0; i < n; ++i) {
		xy[i]=x[i]*y[i];
		cout<<xy[i];
	}	cout<<"\n";
		





	fin.close();
	fans.close();


}
	

