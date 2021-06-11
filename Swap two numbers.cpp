//Swap two numbers...

#include<iostream>
using namespace std;

int main()
{
    int num1, num2;
    
    cout<<"Before Swapping"<<endl;
    
    cout<<"Enter First Number: "<<endl;
    cin>>num1;
    
    cout<<"Enter Second Number: "<<endl;
    cin>>num2;
    
    int temp = num1;
    num1 = num2;
    num2 = temp;
    
    cout<<"After Swapping"<<endl;
    
    cout<<"First number is: "<<num1<<endl;
    cout<<"Second number is: "<<num2;
    
    return 0;
    
}
