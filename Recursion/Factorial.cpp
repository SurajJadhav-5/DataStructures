#include<iostream>
using namespace std;

int Fact(int n)
{
    if(n>0)
        return Fact(n-1)*n;
    return 1;

}

int FactLoop(int n)
{
    int f = 1,i;
    for(i=1;i<n+1;i++)
    {
        f = f*i;
    }
    return f;
}

int main()
{
    int n;
    cin>>n;
    cout<<Fact(n)<<endl;
    cout<<FactLoop(n)<<endl;
    return 0;
}