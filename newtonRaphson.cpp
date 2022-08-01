#include<iostream>
#include<math.h>
using namespace std;

float func(float x){
    return ((x * x * x) + (x * x) - (3 * x) - 3);
    //return(exp(-x) - (3*x) );
}
float func2(float x){
    return ( (3*x*x) + (2*x) - 3 );
    //return(-exp(-x) - 3);
}
float iteration(float x){
    return( x - ( func(x)/func2(x) ) );
}

main()
{
    system("cls");

    float y, yy, x1=5, x2;
    float tempx;
    int i=1;

    y = func(x1);
    yy = func2(x1);

    do{
        x2 = iteration(x1);
        tempx = x1;
        x1 = x2;

        cout<<"x"<<i<<"= "<<x2<<endl;
        i++;
    }while( abs(tempx - x2) > 0.001);

    cout<<endl<<"Hence, Root correct to two place of decimal is: "<<x2<<endl<<endl;

    return 0;
}

