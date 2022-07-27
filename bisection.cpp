#include <iostream>
#include<math.h>
using namespace std;

float func(float x)
{
    return ((x * x * x) + (x * x) - (3 * x) - 3);
}
main()
{
    system("cls");

    float x0, xx0=999, x=0, x1, x2, y,y1,y2;
    x0 = (x1 + x2) / 2;

    do{
        y1 = func(x);
        x++;
        y2 = func(x);
    }while( ( y1 * y2 ) > 0);
    
    x1 = x-1;
    x2 = x;

    cout<<"x1 = "<<x1<<" x2 = "<<x2<<endl;
    while (abs(xx0 - x0) > 0.001)
    {

        y = func(x0);

        if (y >= 0)
            x2 = x0;

        else 
            x1 = x0;

        xx0 = x0;
        x0 = (x1 + x2) / 2;
    }
    cout<<"Root correct to two decimal point= "<<x0<<endl<<endl;

}