//Reverse of an array...

#include<iostream>
using namespace std;

int main()
{
    int n;
    
    cout<<"Enter the size of array: ";
    cin>>n;
    
    cout<<endl;
    
    int arr[n];
    
    for(int i=0; i<n; i++)
    {
        cout<<"Enter number: ";
        cin>>arr[i];
    }
    
    cout<<endl;
    
    cout<<"Reversed array is: ";
    
    for(int i=n-1; i>=0; i--)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
