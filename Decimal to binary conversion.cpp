//Decimal to binary conversion...

#include<iostream>
using namespace std;

int main()
{
    int n, rem, i=0;
    
    cout<<"Enter the Decimal number: "<<endl;
    cin>>n;
    
    int arr[n];
    
    while(n>0)
    {
        rem = n%2;
        n /= 2;
        arr[i] = rem;
        i++;
    }
    
    cout<<"Binary number is: ";
    
    for(int j=i-1; j>=0; j--)
    {
        cout<<arr[j];
    }
    
    return 0;
}
