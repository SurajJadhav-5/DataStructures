#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p;     //pointer declaration      
    p = &a;     // p - pointer trpe variable  stores address of a

    cout <<"a = " << a<<endl;
    cout <<"address of a (&a) = " << &a << endl;
    cout <<"address of a (p) = " << p << endl;
    cout <<"value of a (*p) = " << *p << endl;



    // pointer to an array

    int arr[5] = {11,22,33,44,55};
    int *ptr = arr;   // or int *ptr= &arr[0]
    // here no need to give & because 
    //array name itself stores address of first element

    for (int i=0;i<5;i++)
    {
        cout<<ptr[i]<< endl;  //printing using poiter
    }




    // array in heap
    int *x;
    x = new int[3]; // stores in heap
    x[0] = 10;
    x[1] = 20;
    x[2] = 30;

     for (int i=0;i<3;i++)
    {
        cout<<x[i]<< endl;  //printing using poiter
    }

    delete [] x;  // release the dynamically allocated memory in heap


    //sizeof pointers
     int *p1;
     float *p2;
     char *p3;
     double *p4;

     cout<<sizeof(p1)<<endl;
     cout<<sizeof(p2)<<endl;
     cout<<sizeof(p3)<<endl;
     cout<<sizeof(p4)<<endl;



}