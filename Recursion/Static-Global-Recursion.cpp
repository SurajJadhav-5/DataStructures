#include<iostream>
using namespace std;

int y = 0;                  // global variable
int funGlobal(int n)
{
    if(n>0)
    {
        y++;
        return funGlobal(n-1) + y;           
    }
    return 0;
}


int funStatic(int n)
{
    static int x = 0;           //static variable
    if(n>0)
    {
        x++;
        return funStatic(n-1) + x;
    }
    return 0;
}



int main()
{
    int a = 5;
    cout<<funStatic(a)<<endl;
    cout<<funStatic(a)<<endl;

    int b = 5;
    cout<<funGlobal(b)<<endl;
    cout<<funGlobal(b)<<endl;
}