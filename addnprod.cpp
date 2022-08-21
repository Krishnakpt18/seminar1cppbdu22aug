#include <iostream>
using namespace std;
void sum();
void product();
int a,b,add,mul;

int main()
{
	cout<<"Enter values of a and b ";
	cin>>a>>b;
	sum();
    product();
	return 0;
}
void sum(){
	add=a+b;
	cout<<"The sum of the two numbers is "<<add<<endl;
}
void product(){
	mul=a*b;
	cout<<"The product of the two numbers is "<<mul<<endl;
}