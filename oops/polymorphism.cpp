#include<iostream>
#include<list>
using namespace std;

class Channel    
{
private:                       
    string Ownername;                   // when we use private means we hide this data that is data abstraction
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

    void fun()
    {
        cout<<Name;                     
        cout<<" Function from base class."<<endl;
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
    int rating;
public:

    AnotherChannel(string name, string ownername): Channel(name, ownername)  // inherating constructer
    {

    }

    void fun()
    {
        cout<<Name;                     
        cout<<" Function from derived class"<<endl;
    }

    void fun(int rating)
    {
                           
        cout<<" Rating of this channel is = "<<rating<<endl;
    }

};




int main()
{   

    Channel c1("TechWithSJ", "Suraj Jadhav");     
    c1.fun();   
    AnotherChannel c2("DJ", "Dhiraj Jadhav");   
    c2.fun();                                    // same function name but working is different as class is different
    
    AnotherChannel c3("DJ", "Dhiraj Jadhav");   
    c3.fun(5);                                  // here argument is added so it worked accordingly
    
     
}