/* to evaluate an expression based on inputs
 since only a and -a are provided a is considered as expression to b e evaluated on condition*/ 
#include<iostream>
int main(){
	using namespace std;
	double x;
	cout<<"Enter input ";
	cin>>x;
	if (x<0) {
		cout<<"a";	
	}
        if (0<=x) {
		if (x<=6.14) {
			cout<<"-a";
		}
	}  
	else{
		cout<<"a";
	};
	return 0;
	
}
