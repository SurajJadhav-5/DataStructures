#include<iostream>
using namespace std;

struct rectangle
{
    int length;
    int breadth;
};

int area(struct rectangle *p)  //pass by address
{
    return p->length*p->breadth;
}

int main()
{
    struct rectangle r1 = {5,10};
    int a = area(&r1);
    cout<<"area = "<< a;

}