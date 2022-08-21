#include<iostream>
#include<string.h>
using namespace std;
main(){
	int a,b,c;
	string d = "The largest number of the three is ";
	cout <<"Enter the three values "; 
	cin>>a>>b>>c;
	if (a>b) {
		if (a>c) {
			cout<<d<<a;	
		}	
	}
	if (b>c) {
		if (b>a) {
			cout<<d<<b;
		}	
	}
	if (c>b) {
		if (c>a) {
			cout<<d<<c;	
		}	
	}
	return 0;
}
