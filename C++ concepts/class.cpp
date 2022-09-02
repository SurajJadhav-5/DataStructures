#include<iostream>
using namespace std;

class rectangle
{
    private:
        int length;
        int breadth;
    
    public:
        rectangle()
        {
            length = 0;
            breadth = 0;
            cout<<"Def con";
        }

        rectangle(int l, int b)
        {
            length = l;
            breadth = b;
            cout<<"con";
        }

        int area()
        {
            cout<<"area";
            return length*breadth;
        }

        int peri()
        {
            cout<<"peri";
            return 2*(length+breadth);
        }

        ~rectangle()
        {
            cout<<"Destructor";
        }

};


int main()
{
    // rectangle r;
    rectangle r(10,5);
    int a = r.area();
    int p = r.peri();
    cout<<"Area = "<< a<<endl<<"Perimeter"<<p<<endl;
}