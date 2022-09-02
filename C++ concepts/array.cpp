#include<iostream>
using namespace std;

int main()
{
    // array declaration
    int arr[5];
     // store values
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;

    cout<<"Size of array " << sizeof(arr)<< endl;

    // accessing elements
    int i;
    for (i=0;i<5; i++)
    {
        cout<< i<<"th element is "<< arr[i]<<endl;
    }


    // array declaration and values
    int b[5] = {1,2,3,4,5};
    for (int x:b)  // for each loop
    {
        cout<< x <<endl;

    }

    
}
