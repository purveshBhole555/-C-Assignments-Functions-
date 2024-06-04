#include <iostream>
using namespace std;

int square(int x )
{
    return x*x;
}

int squareOfCount(int n)
{
    int count =0;
    for(int i=1 ; i<=n ; i++)
    {
        if(n%10!=0) count++;
        n/=10;
    }
    return square(count);
}

int main()
{
    int n ;
    cout<<"Enter the number ";
    cin>>n;
    cout<<squareOfCount(n);
    return 0;
}