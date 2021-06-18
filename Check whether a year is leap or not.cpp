//Check whether a year is leap or not...

#include<iostream>
using namespace std;

int main()
{
    int year;
    
    cout<<"Enter the Year: "<<endl;
    cin>>year;
    
    if(year%4==0)
    {
        if(year%100==0)
        {
            if(year%400==0)
            {
                cout<<"Leap year"<<endl;
            }
            
            else
            {
                cout<<"Not a Leap year"<<endl;
            }
        }
        else
        {
            cout<<"Leap Year"<<endl; //There is an exception for century year.
        }
    }
    else
    {
        cout<<"Not a Leap Year"<<endl;
    }
    
    return 0;
}
