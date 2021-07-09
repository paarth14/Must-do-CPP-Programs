//Maximum & Minimum element in an array...

#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    
    int arr[n];
    
    for(int i=0; i<n; i++)
    {
        cout<<"Enter Element: ";
        cin>>arr[i];
    }
    
    int maxNo = INT_MIN;
    int minNo = INT_MAX;
    
    for(int i=0; i<n; i++)
    {
        maxNo = max(maxNo, arr[i]);
        minNo = min(minNo, arr[i]);
    }
    
    cout<<"Maximum no. is: "<<maxNo<<endl;
    cout<<"Minimum no. is: "<<minNo<<endl;
}
