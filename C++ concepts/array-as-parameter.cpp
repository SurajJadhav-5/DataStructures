#include<iostream>
using namespace std;

// array as paramerter
// array - pass by address, n- pass by value
void fun(int A[], int n)    //or   void fun(int* A, int n)
{
    for (int i=0;i<n;i++)       // you can access and modify array members
    cout<<A[i]<<endl;
}


// returning array from function
int * fun2(int size)
{
    int *p;
    p = new int[size];
    for (int i=0;i<size;i++)
    p[i] = i+1;

    return p;
}



int main()
{
    int X[] = {1,2,3,4,5};
    int n = 5;
    // fun(X, n);
    int *ptr;
    ptr = fun2(n);
    fun(ptr,n);

    return 0;

}