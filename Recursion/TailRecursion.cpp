#include<iostream>
using namespace std;

int rec(int n)
{
    cout<<"Recursion"<<endl;
    if(n>0)
    {  
        cout<<n<<endl; 
        rec(n-1);        // the processing occurs before the recursive call  hence tail recursion
                         // recursive call is the last call in the function
    }
    return 0;
}


int loop(int n)
{
    cout<<"Loop"<<endl;

    while(n>0)
    {  
        cout<<n<<endl; 
        n--;            // both functions works same but loop has constant O(1) spcace complexity
                        // and recursion has O(n) as it uses stack for each call, 
                        //time complexity is same for both.
                        // if possible instead of tail recursion use loop
    }
    return 0;
}


int main()
{
    int x = 3;
    rec(x);
    loop(x);

}