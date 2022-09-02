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
};

int main()
{   
    Channel c1;                     // object
    c1.Name = "TechWithSJ";
    c1.Ownername = "Suraj Jadhav";
    c1.Subscribers = 100;
    c1.PublishedVideo = {"AWS", "DevOps"};


    cout<<"Name : "<<c1.Name<<endl;
    cout<<"Ownername : "<<c1.Ownername<<endl;
    cout<<"Subscribers : "<<c1.Subscribers<<endl;
    cout<<"Videos : "<<endl;

    for (string VideoTitle:c1.PublishedVideo)
    {
        cout <<VideoTitle<< endl;
    }
     
}