// Average of Numbers Using Arrays...

#include<iostream>
using namespace std;

int main()
{
    int n;
    float num[100], sum=0.0, average;
    
    cout<<"Enter the number of data: ";
    cin>>n;
    
    while(n>100 || n<=0)
    {
        cout<<"Error! , number should be in range of (1 to 100)"<<endl;
        cout<<"Enter the number again: ";
        cin>>n;
    }
    
    for(int i=0; i<n; i++)
    {
        cout<<i+1<<". Enter number: ";
        cin>>num[i];
        sum += num[i];
    }
    
    average = sum/n;
    cout<<"Average: "<<average;
    
    return 0;
}
