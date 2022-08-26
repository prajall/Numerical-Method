#include<iostream>
using namespace std;

// float func(int x)
// {
// }

int main()
{
    float L[10];
    int n;
    float x[] = {0,1,2,3};
    float fx[] = {1 , 2.7183, 7.3891, 20.085};
    float sum = 0;
    float X = 1.2;

    // cout << "Enter n: ";
    // cin >> n;
    // cout << "Enter x: ";
    // cin >> X;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j <= 4; j++)
        {
            if (i != j)
                L[i] = (X - x[j]) / (x[i] - x[j]);
        }
        L[i] = L[i] * fx[i];
        sum = sum + L[i];
        cout<<sum<<endl;
    }
    
    // cout<<f;
}
