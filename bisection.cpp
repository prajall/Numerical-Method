#include <iostream>
#include<iomanip>
#include<math.h>
using namespace std;

float func(float x) {
    return ((x * x * x) + (x * x) - (3 * x) - 3);
}
main()
{
    system("cls");

    float x0=0, xx0=999, x=0, x1, x2, y,y1,y2;
    int i=1;

        do{
            y1 = func(x);
            x++;
            y2 = func(x);
        }while( ( y1 * y2 ) > 0);
    
    x1 = x-1;
    x2 = x;

    cout<<"Initial values: "<<"x1 = "<<x1<<", x2 = "<<x2<<endl<<endl;
    cout<<setw(15)<<"Iteration"<<setw(10)<<"x1"<<setw(10)<<"x2"
            <<setw(10)<<"x0"<<setw(15)<<"f(x)"<<endl
            <<"------------------------------------------------------------"<<endl;
    while (abs(xx0 - x0) > 0.001) {
        xx0 = x0;
        x0 = (x1 + x2) / 2;
        y = func(x0);

        cout<<setw(15)<<i<<setw(10)<<x1<<setw(10)<<x2
            <<setw(10)<<x0<<setw(15)<<y<<endl;
        if (y >= 0)
            x2 = x0;
        else 
            x1 = x0;
        i++;
    }
    cout<<endl<<"Hence, Root correct to two decimal point= " << x0 << endl <<endl;
    
    return 0;

}
