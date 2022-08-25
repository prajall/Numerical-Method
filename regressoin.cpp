#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int x[5]={1,2,3,4,5},y[5]={3,5,7,10,12},x2[10],xy[10],Ex=0,Ey=0,Ex2=0,Exy=0,n=5;
	float a,b;
	int i;
	
	for(i=0;i<n;i++){
		x2[i] = x[i]*x[i];
		xy[i] = x[i]*y[i];
		Ex = Ex + x[i];
		Ey = Ey + y[i];
		Ex2 = Ex2 + x2[i];
		Exy = Exy + xy[i];
	}
	
	cout<<setw(10)<<"x"<<setw(10)<<"y"<<setw(10)<<"x2"<<setw(10)<<"xy"<<endl
		<<"------------------------------------------"<<endl;
	for(i=0; i<n; i++){
		cout<<setw(10)<<x[i]<<setw(10)<<y[i]<<setw(10)<<x2[i]<<setw(10)<<xy[i]<<endl;
	}
	cout<<endl<<"E"<<setw(9)<<Ex<<setw(10)<<Ey<<setw(10)<<Ex2<<setw(10)<<Exy<<endl;
	b = ((n*Exy) - (Ex*Ey)) / ((n*Ex2) - (Ex*Ex));
	a = (Ey/n) - b*(Ex/n);
	
	cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
	
	cout<<"Therefore the required regression equation is y = "<<a<<" + "<<b<<"x"<<endl;
		//115
	
}
