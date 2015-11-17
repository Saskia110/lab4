#include <iostream>
#include <cmath>

using namespace std;


void print(double* p, const int N, const double dx,
           const double xmin)
{
   for(int i=0; i<N; i++)
       cout << i*dx + xmin << "\t" << p[i] << endl;
}

void array(double* p,const int N,const double dx, const double xmin){
  for(int i=0; i<N; i++){
  double x = dx*i+xmin;
  p[i]=exp(-x*x);
}
}

void ableitung( double* p, const int N, const double dx){
 double a= (p[1+1]-p[1-1])/(2*dx), b=0;
  for(int i=2; i<N-1; i++){
    b =(p[i+1]-p[i-1])/(2*dx);
    p[i-1]=a;
    a =b;
  }
    
  }

int main(){
  const int N = 1000;
  double p[N];
  const double xmax = 15;
  const double xmin = -15;
  const double dx = (xmax-xmin)/(N-1);

  
  // call to functio which calculates the derivative
  array(p,N,dx,xmin);
  ableitung(p,N,dx);
  print(p,N,dx,xmin);

  return 0;
}
