#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main()
{
	float x[6]={0,1,3,5,7,9},y[6]={1,0.891,0.708,0.562,0.447,0.355};
	float Y[10],x2[10],xY[10],Ex=0,EY=0,Ex2=0,ExY=0,n=5;
	float a,b,A;
	int i;
	
	for(i=0;i<n;i++){
		Y[i] = log(y[i]);
		x2[i] = x[i]*x[i];
		xY[i] = x[i]*Y[i];
		Ex = Ex + x[i];
		EY = EY + Y[i];
		Ex2 = Ex2 + x2[i];
		ExY = ExY + xY[i];
	}
	
	cout<<setw(15)<<"x"<<setw(15)<<"y"<<setw(15)<<"Y"<<setw(15)<<"x2"<<setw(15)<<"xY"<<endl
		<<"------------------------------------------------------------------------------"<<endl;
	for(i=0; i<n; i++){
		cout<<setw(15)<<x[i]<<setw(15)<<y[i]<<setw(15)<<Y[i]<<setw(15)<<x2[i]<<setw(15)<<xY[i]<<endl;
	}
	cout<<"------------------------------------------------------------------------------"
		<<endl<<"E"<<setw(14)<<Ex<<setw(15)<<EY<<setw(15)<<EY<<setw(15)<<Ex2<<setw(15)<<ExY<<endl;
	b = ((n*ExY) - (Ex*EY)) / ((n*Ex2) - (Ex*Ex));
	A = (EY/n) - b*(Ex/n);
	a = exp(A);	
  
	cout<<endl<<"a = "<<a<<endl<<"b = "<<b<<endl;

}
