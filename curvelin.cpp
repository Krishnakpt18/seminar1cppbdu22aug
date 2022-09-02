#include<iostream>
#include<math.h>
#include<fstream>
#include<iomanip>
using namespace std;
int main(){
	int i,j,k,n;
	double x[n]={},xd[n]={},yd[n]={},y[n]={},x2[n]={},xy[n]={},addx=0,addy=0,addx2=0,addxy=0,a,b;
	ifstream fin("in.txt");

	ofstream fans("ans.txt");
	if (fin.is_open()) {
		fin>>n;
	}


	for (i = 0; i < n; ++i) {
		fin>>x[i];

	}	cout<<"\n";

	for (i = n; i < n+n; ++i) {
		fin>>y[i];

	}	cout<<"\n";

	for(i=0;i<n;++i){
        addx+=x[i];
        addy+=y[i];
        addx2+=x2[i];
        addxy+=xy[i];
	}
	for (i = 0; i < n; ++i) {
		x2[i]=x[i]*x[i];
		xy[i]=x[i]*y[i];

	}	cout<<"\n";

	for (i = 0; i < n; ++i) {

		cout<<x[i]<<setw(16)<<y[i]<<setw(8)<<x2[i]<<setw(10)<<xy[i];

	}	cout<<"\n";
    a=(n*addxy-addx*addy)/(n*addx2-(addx*addx));
    b=(addy*addx2-addx*addxy)/(n*addx2-(addx*addx));
    cout<<endl;
    cout<<a<<"     "<<b;





	fin.close();
	fans.close();


}


