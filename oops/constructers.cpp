#include<iostream>
#include<list>
using namespace std;

class Channel    
{
public:                         // access modifier
    string Name;
    string Ownername;
    int Subscribers;
    list<string> PublishedVideo;   //crating list


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

    ~Channel()                  // destructer
    {
        cout<<"Destructer is called";
    }
};

int main()
{   
    Channel c1("TechWithSJ", "Suraj Jadhav");                     // object
    c1.Subscribers = 100;                       // can change data members here also
                                                // to avoid mis handling of data outside class use encapsulation. 
    c1.PublishedVideo.push_back("AWS");             // push_back appeds to list
    c1.PublishedVideo.push_back("DevOps"); 
    
    c1.GetInfo();
     
}