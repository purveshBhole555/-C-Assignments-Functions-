#include <iostream>
using namespace std;
// void check(int a , int b)
// {
//     int temp=0;
//     if(b>a)
//     {
//         temp=a;
//         a=b;
//         b=temp;
//     }
// }
void odd(int a, int b)
{

    if (b > a)
    {
        for (int i = a; i <= b; i++)
        {
            if (i % 2 == 0)
                continue;
            if (i % 2 != 0)
                cout << i << " ";
        }
    }
    else
    {
        for (int i = b; i <= a; i++)
        {
            if (i % 2 == 0)
                continue;
            if (i % 2 != 0)
                cout << i << " ";
        }
    }
}

int main()
{
    int a, b;
    cout << "Enter two numbers : ";
    cin >> a >> b;

    cout << "the odd numbers between " << a << " and " << b << " is ";
    odd(a, b);
}