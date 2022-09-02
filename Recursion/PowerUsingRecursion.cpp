#include<iostream>
using namespace std;

int power(int a, int b)
{
    if(b>0)
        return a* power(a,(b-1));
    return 1;
}

int main()
{
    int m,n;
    cin>>m>>n;
    cout<<power(m,n);
}