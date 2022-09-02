#include<iostream>
using namespace std;

// defination of structute - does not consume memory
struct rectangle
{
    int length;
    int breadth;   
}r1, r2; // declaration - 1

struct rectangle r4;  // declaration - 3
int main()
{
    struct rectangle r3= {5, 10}; // declaration - 2
    cout<<"Size of struct = "<< sizeof(r3)<< endl;
    cout<< "Area = "<< r3.breadth*r3.length<<endl;

    r4.breadth = 5;
    r4.length = 5;
    cout<< "Area = "<< r4.breadth*r4.length<<endl;

}