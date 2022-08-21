#include<iostream>
using namespace std;
int oddsum();
int evensum();
int i,sum=0,suma=0;
main(){
	
	evensum();
	oddsum();
}

int oddsum(){
	for (i = 0; i < 100 ;++i) {
		if (i%2==0) {
			sum=sum+i;
			
		}
	}
	cout<<"The sum of even numbers is "<<sum<<endl;
}
int evensum(){
	for (i = 0; i < 100; ++i) {
		if (i%2==1) {
			suma=suma+i;
			
		}
	}
	cout<<"The sum of odd numbers is "<<suma<<endl;
}

