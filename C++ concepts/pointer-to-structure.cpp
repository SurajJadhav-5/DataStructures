#include<iostream>
using namespace std;


struct  rectangle
{
    int length;
    int breadth;
};


int main()
{
    struct rectangle r1 = {10,20};

    rectangle r2 = {10,20}; // writing struct is not mandetory in cpp
    // above both are valid declaration
    cout<<r1.length<<endl<<r1.breadth<<endl;

    rectangle *p1 = &r1;     // struct pointer
    cout<<p1->length<<endl<<p1->breadth<<endl;


    rectangle *p2;
    p2 = new rectangle; //dynamic allocation memory in heap
    p2->length = 11;
    p2->breadth = 22;

    




}