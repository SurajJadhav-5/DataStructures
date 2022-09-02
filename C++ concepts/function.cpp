#include<iostream>
using namespace std;

int add(int a, int b)     //function declaration a,b- formal parameters
{
    int c;
    c = a+b;               // fucntion defination
    return c;
}

int main()
{
    int x=10,y=11,z; 
    z = add(x,y);               //x,y- actual parameters 
                                // this is call by value passing
    cout<<"Sum = "<< z<< endl;
}
