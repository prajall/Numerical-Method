#include<iostream>
using namespace std;

int main()
{
	float x[]={1,1.3,1.6,1.9,2.2};
	float fx[]={0.765,0.62,0.455,0.281,11};
	float fd[10][10];
	int n=5,i=0,j=0,k;
	float X,h,s;
	
	X=1.1;
	h=x[1]-x[0];
	s=(X-x[0])/h;
	
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			fd[i][j] = fd[i-1][j+1]-fx[i-1][j];	
			cout<<fd[i][j]<<" ";
		}
		cout<<"end"<<endl;
	}
	
	
	
	
	
	
}
