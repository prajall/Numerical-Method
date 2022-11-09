#include<iostream>
using namespace std;

float f(float x,float y){
	return (((y*y) - (x*x)) / ((y*y) + (x*x)));
}

int main()
{
	int i;
	float x=0, y=1;
	float m,m1,m2,m3,m4;
	float h=0.2;
	
	for (i=0;i<2;i++){
		
		m1 = f(x,y);
		m2 = f(x+(h/2), y+(h/2*m1));
		m3 = f(x+(h/2), y+(h/2*m2));
		m4 = f(x+h, y+(m3*h));
		
		m = (m1 + (2*m2) + (2*m3) + m4) / 6;
		
		y = y + (m*h); 
		x += h;	
	}
	cout<<y;
	
	return 0;	
}
