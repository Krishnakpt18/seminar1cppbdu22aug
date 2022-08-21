#include <iostream>
#include <math.h>
using namespace std;
int i;
double sum=0,n,mean,variance, setofnums[6],x=0;
int main()
{
	cout<<"Enter value of n ";
	cin>>n;
	for (int i = 1; i <= n; ++i)
	{
		cout<<"Enter number "<<i<<" ";
		cin>>setofnums[i];
		cout<<endl;
	}
	for (int i = 1; i <= n; ++i)
	{
		sum=sum+setofnums[i];
	}
	mean=sum/n;
	
	cout<<"The mean is "<<mean<<endl;

	cout<<endl;
	for (int i = 1; i <= n; ++i)
	{
		x=x+((setofnums[i]-mean)*(setofnums[i]-mean));
	}
	variance=sqrt((x)/(n-1));

	cout<<"Variance of given numbers is "<<variance;

	return 0;
}
