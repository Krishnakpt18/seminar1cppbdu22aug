#include<iostream>
#include<string.h>
using namespace std;
/* using namespace std; 
  can be used to eliminate redundancy in std::
 */
int criteria, mark;
string pmt="The equivalent grade for the  mark is  ";

main(){
	cout<<"Enter the marks"<<" ";
	cin >>mark;
	if(mark<50)criteria=1;
	if(51<mark && mark<65)criteria=2;
	if(66<mark && mark<80)criteria=3;
	if(81<mark && mark<100)criteria=4;
switch (criteria) {
	case 1:
		cout<<pmt<<"F";
		break;		
	case 2:
		cout<<pmt<<"C";
		break;
	case 3:
		cout<<pmt<<"B";		
		break;
	case 4:
		cout<<pmt<<"A";
		break;		
}
return 0;
}
