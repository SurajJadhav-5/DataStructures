#include<iostream>
using namespace std;

void swap(int &x, int &y)    // call by referance
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a=10,b=20;
    swap(a,b);
    cout<<"a = "<<a<<endl<<"b = "<<b;
    return 0;
}