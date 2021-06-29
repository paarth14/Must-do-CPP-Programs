//Check Whether a number is palindrome or not...

#include<iostream>
using namespace std;

int main()
{
    int n, num, rev=0, rem;
    
    cout<<"Enter a number: "<<endl;
    cin>>num;
    
    n = num;
    
    do{
      
        int rem = num%10;
        rev = rev*10 + rem;
        num /= 10;
      
    }while(num!=0);
    
    cout<<"Reversed number is: "<<rev<<endl;
    
    if(n == rev)
    {
        cout<<"It is a Palindrome Number!"<<endl;
    }
    
    else
    {
        cout<<"Not a Palindrome Number"<<endl;
    }
    
    return 0;
}
