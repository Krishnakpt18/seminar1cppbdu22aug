#include <iostream>
#include <cmath>
#include <fstream>
#include <iomanip>
using namespace std;

#define DELX 1.0e-14
#define DELF 1.0e-12
#define DELFX 1.0e-10
#define NMAX 100

double f(double);
double fp(double);

int main ()
{
  ifstream fin;
  ofstream fout;
  fout.open("realout.txt");
  double fx,fpx,eps,x;
  fout<<setiosflags(ios::scientific | ios::showpoint)<<setprecision(5);

  cout<<"Enter the initial value\n";
  cin>>x;
  fout<<"# "<<string(70,'-')<<"\n";
  fout<<"# "<<"Iteration"<<setw(10)<<"x"<<setw(10)<<"f(x)"<<setw(10)<<"f'(10)\n";
  fout<<"# "<<string(70,'-')<<"\n";
  int n;
  while (n<=NMAX)
  {
    fx=f(x);
    fpx=fp(x);
    if (abs(fpx) <= DELFX) {
      fout<<"Derivative is zero\n";
      if (abs(fx) <= DELFX) {
        fout<<"# "<<string(70,'-')<<"\n";
        fout<<"The root is = "<<x<<"and f(x) ="<<fx<<"\n";
        fout<<"# "<<string(70,'-')<<"\n";
        return 0;
      }
      fout<<"Unable to find root ,Try another initial value\n";
      return 1;
    }
    
    if (n <=0)
    {
      fout<<setw(5)<<n<<setw(10)<<x<<setw(10)<<fx<<setw(10)<<fpx<<"\n";

    }
    else 
    {
       fout<<setw(5)<<n<<setw(10)<<x<<setw(10)<<fx<<setw(10)<<fpx<<"\n";
        
    } 
    if(abs(fx) <= DELX || abs(fx) <= DELF)  {
      fout<<"# "<<string(70,'-')<<"\n";
      fout<<"# "<<"The root 'x' for the given equation is,x= "<<x;
      fout<<"therefore ,f(x)=f("<<x<<")="<<int(fx)<<"\n";
      fout<<"# "<<string(70,'-')<<"\n";
      return 0;
     } 
    eps=fx/fpx;
   x-= eps;
    n++;
  }
  if (n = NMAX)
  
    fout<<"\n Iteration limit of "<<n<<" reached\n";


  return 2;
}


double f(double x){
  double x2,x3,x4,x5;
  x2=x*x;
  x3=x2*x2;
  x4=x3*x3;
  x5=x4*x4;

  return x3 * 3.0 + x2 * 2.0 + x * 4.0 +6.0;
}

double fp(double x){
  double x2,x3,x4,x5;
  x2=x*x;
  x3=x*x2;
  x4=x*x3;
  x5=x*x4;
   
  return x2 * 9.0 + x * 4.0 + 4.0;
}

