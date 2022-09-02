#include<iostream>
#include<list>
using namespace std;

class Channel    
{
private:                        // encapsulation - data members must be private
    string Name;
    string Ownername;
    int Subscribers;
    list<string> PublishedVideo;   

public:                             //member function made public
    Channel( string name, string ownername)    // constructor
    {
        Name = name;                                
        Ownername = ownername;
        Subscribers = 0;                //setting default parameters
    }


    void GetInfo()                      // member function
    {
        cout<<"Name : "<<Name<<endl;
        cout<<"Ownername : "<<Ownername<<endl;
        cout<<"Subscribers : "<<Subscribers<<endl;
        cout<<"Videos : "<<endl;

        for (string VideoTitle:PublishedVideo)
        {
            cout <<VideoTitle<< endl;
        }

    }
  
    // getter and setter   can create functions for every data member to access and modify
    void SetName(string name)           //setter - functions to modify the data member
    {
        Name = name;
    }

    void GetName()           //getter - functions to access the data member
    {
        cout<<"Name = "<< Name <<endl;
    }

    ~Channel()                  // destructer
    {
        cout<<"Destructer is called";
    }
};

int main()
{   
    Channel c1("TechWithSJ", "Suraj Jadhav");    // object
    // c1.Subscribers = 100;    --> Now can access data members directly.
    c1.GetInfo();               
    c1.SetName("Karan");                // name changes
    c1.GetName();
    c1.GetInfo();  
    
     
}