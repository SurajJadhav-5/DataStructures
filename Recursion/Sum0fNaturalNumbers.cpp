#include<iostream>
using namespace std;

int s=0;
int SumUsingRecursion(int n)
{
    
    if(n>0)
    {
        s = SumUsingRecursion(n-1) + n;  
    }
    return s;
}

int SumFormula(int n)
{
    return n*(n+1)/2;
}

int SumLoop(int n)
{
    int s = 0;
    for (int i=1; i<n+1; i++)
    {
        s += i;
    }
    return s;
}

int main()
{
    int n;
    cin>>n;
    cout<<"Sum "<<SumUsingRecursion(n)<<endl;
    cout<<"Sum "<<SumFormula(n)<<endl;
    cout<<"Sum "<<SumLoop(n)<<endl;

}