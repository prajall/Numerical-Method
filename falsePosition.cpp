#include <iostream>
#include<iomanip>
using namespace std;

float func(float x)
{
    // return ((x * x * x) - (x * x) - (3 * x) - 3);
    return((x*x*x) - (2*x) - 5);
}

float formula(float x1, float x2)
{
    return (((x1 * func(x2)) - (x2 * func(x1))) / (func(x2) - func(x1)));
}

main()
{
    system("cls");

    float y1, y2, x = 0, x1, x2, x0 = 0, y, xx0 = 999, y0;
    int i=1;

    do
    {
        y1 = func(x);
        x++;
        y2 = func(x);
    } while ((y1 * y2) > 0);
    x1 = x-1;
    x2 = x;


    cout<<"x1= "<<x1<<", x2= "<<x2<<endl;

    cout<<"Initial values: "<<"x1 = "<<x1<<", x2 = "<<x2<<endl<<endl;
    cout<<setw(15)<<"Iteration"<<setw(10)<<"x1"<<setw(10)<<"x2"<<setw(15)<<"f(x1)"<<setw(15)<<"f(x2)"
            <<setw(10)<<"x0"<<setw(15)<<"f(x0)"<<endl
            <<"------------------------------------------------------------------------------------------"<<endl;

    while (abs(xx0 - x0) > 0.001)
    {
        y1 = func(x1);
        y2 = func(x2);
        xx0 = x0;
        x0 = formula(x1, x2);
        y0 = func(x0);

        cout<<setw(10)<<i<<setw(15)<<x1<<setw(10)<<x2<<setw(15)<<y1<<setw(15)<<y2
            <<setw(10)<<x0<<setw(15)<<y0<<endl; 

        if (y0 < 0){
            x1 = x0;
        }       
        else {
            x2 = x0;
        }
        i++;

    }
    cout<<endl<<"Hence, Root correct to two decimal point is "<<x0<<endl<<endl;
    
    return 0;
}