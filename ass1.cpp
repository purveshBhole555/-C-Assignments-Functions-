#include <iostream>
using namespace std;

void square(int x )
{
    for(int i=1 ; i<=x ; i++)
    {
        cout<<"The square of "<<i<<" is "<<i*i<<endl;
    }
}

int main()
{
    int n ;
    cout<<"Enter the number ";
    cin>>n;
    square(n);
    return 0;
}