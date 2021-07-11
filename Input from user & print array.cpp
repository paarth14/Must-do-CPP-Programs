//Input from user & print array..

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    
    cout<<endl;
    
    int arr[n];
    
    for(int i=0; i<n; i++)
    {
        cout<<"Enter element: ";
        cin>>arr[i];
    }
    
    cout<<endl;
    
    cout<<"Array is: ";
    
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
