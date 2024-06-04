#include <iostream>
#include <cmath>
using namespace std;

float area(float x )
{
    return M_PI * x*x;   
}

int main()
{
    float n ;
    cout<<"Enter the number ";
    cin>>n;
    cout<<area(n);
}