#include<iostream>
using namespace std;

double e(int x, int n)
{
    static double p=1, f=1; //p-power, f- factorial
    double r;
    
    if(n == 0)
        return 1;

    r = e(x,n-1);
    p = p*x;            
    f = f*n;
    return r+p/f;           //adding from higher power term to smaller
}

int main()
{
    cout << "Result = " << e(1,20)<<endl;
    return 0;
}