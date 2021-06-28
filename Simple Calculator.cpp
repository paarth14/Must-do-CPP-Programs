//Simple Calculator -- Menu driven program

#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int num1, num2;
    
    cout<<"Enter First number: "<<endl;
    cin>>num1;
    
    cout<<"Enter Second number: "<<endl;
    cin>>num2;
    
    int choice;
    
    do{
    cout<<"Enter the Arithmetic operation of your choice: "<<endl;
    cout<<"Press 1 --> Addition"<<endl;
    cout<<"Press 2 --> Subtraction"<<endl;
    cout<<"Press 3 --> Multiplication"<<endl;
    cout<<"Press 4 --> Division"<<endl;
    cout<<"Press 5 --> HCF"<<endl;
    cout<<"Press 6 --> LCM"<<endl;
    cout<<"Press 7 --> Exit"<<endl;
    
    cout<<"Enter the choice: "<<endl;
    cin>>choice;
    
    
    switch(choice)
    {
        case 1:
        {
            cout<<"Addition: "<<num1 + num2<<endl;
            break;
        }
        
        case 2:
        {
            cout<<"Subtraction: "<<num1 - num2<<endl;
            break;
        }
        
        case 3:
        {
            cout<<"Multiplication: "<<num1*num2<<endl;
            break;
        }
        
        case 4:
        {
            cout<<"Division: "<<num1/num2<<endl;
            break;
        }
        
        case 5:
        {
            cout<<"HCF: "<<__gcd(num1,num2)<<endl;
            break;
        }
        
        case 6:
        {
            cout<<"LCM: "<<((num1*num2)/__gcd(num1,num2))<<endl;
            break;
        }
        
        case 7:
        {
            cout<<"Thank You!"<<endl;
            break;
        }
        
        default:
        {
            cout<<"Invalid Input"<<endl;
            break;
        }
        
    }
        
    
    }while(choice!=7);
    
    
    return 0;
    
}
