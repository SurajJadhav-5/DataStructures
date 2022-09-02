#include<iostream>
#include<list>
using namespace std;

class Channel    
{
private:                       
    string Ownername;
    int Subscribers;
    list<string> PublishedVideo;   

protected:
    string Name;                    // Protected data members can be accessed from derived class as well.
public:                            
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
        cout<<"Destructer is called"<<endl;
    }
};



class AnotherChannel: public Channel    // inheritance - here access modifiers is used 
                                        // to define all public functions from base class to be 
                                        // private/protected/public in derived class.
{
public:

    AnotherChannel(string name, string ownername): Channel(name, ownername)  // inherating constructer
    {

    }

    void fun()
    {
        cout<<Name;                     
        cout<<" Can create new functions for derived class only."<<endl;
    }

};



int main()
{   
    AnotherChannel c1("TechWithSJ", "Suraj Jadhav");   
    c1.GetInfo();   
    c1.fun();                                    // we can access all base class functions
    
     
}