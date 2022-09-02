#include<iostream>
using namespace std;

int main()
{
    int a =10;
    int &b = a;  // b- referance variable
    cout<<a<<endl<<b<<endl;
    a++;
    cout<<a<<endl<<b<<endl;
    b--;                    // one value changes another also changes
    cout<<a<<endl<<b<<endl;

    int x= 50;
    b= x;
    cout<<a<<endl<<b<<endl;


    // int c = 20;
    // int &b = c;     you cant reassign referance var
    // cout<<c<<endl<<b<<endl;


}
