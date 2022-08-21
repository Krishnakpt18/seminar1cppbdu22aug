#include <iostream>
using namespace std;
main()
{
	int a,b,m,n,l;
	int mat1[100][100],mat2[100][100],add[100][100],mul[100][100];
	cout<<"Enter the number of rows and column ";
	cin>>a>>b;
	for (m = 0; m < a; ++m)
	{
		for (n = 0; n < b; ++n)
		{
			cout<<"Enter element "<<m<<n<<" of first matrix "<<endl;	
			cin>>mat1[m][n];
		}
	}
	for (m = 0; m < a; ++m)
	{
		for (n = 0; n < b; ++n)
		{
			cout<<"Enter element "<<m<<n<<" of second matrix "<<endl;	
			cin>>mat2[m][n];
		}
	}
	//this block executes matrix addition
	for (m = 0; m < a; ++m)
	{
		for (n = 0; n < b; ++n)
		{
			add[m][n]=mat1[m][n]+mat2[m][n];
		}
	}
	cout<<"The sum of the two matrices is "<<endl;
	for (m = 0; m < a; ++m)
	{
		for (n = 0; n < b; ++n)
		{
			//cout<<add[m][n]<<" ";
		}if (n%b==0)
		{
			cout<<endl;
		}
	}
	//this block proceeds with multiplication
	for (m = 0; m < a; ++m)
	{
		for (n = 0; n < b; ++n)
		{
			for (l = 0; l < b; ++l)
			{
				mul[m][n]+=(mat1[m][l]*mat2[l][n]);
			}
		}
	}
	cout<<"The product of the two matrices is "<<endl;
	for (m = 0; m < a; ++m)
	{
		for (n = 0; n < b; ++n)
		{
			cout<<mul[m][n]<<" ";
		}if (n%b==0)
		{
			cout<<endl;
		}
	}
	return 0;
}
