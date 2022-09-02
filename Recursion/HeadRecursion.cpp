#include<iostream>
using namespace std;

int rec(int n)
{
    if(n>0)
    {  
        rec(n-1);         // the processing occurs after the recursive call  hence head recursion
        cout<<n<<endl;        
        
    }
}


int main()
{
    int x = 3;
    rec(x);

}