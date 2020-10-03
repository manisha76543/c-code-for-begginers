#include<iostream>
using namespace std;

void fun(int &, int &);
int main()
{
    int a, b;
    a = 20;
    b = 30;

    cout << "a = " << a << "b = " << b << endl;

    fun(a,b);

    cout << "a = " << a << "b = " << b << endl;
       return 0;
}

void fun(int &x, int &y)
{
    x = x +5;
    y = y -10;
}