//Generate Multiplication Table...

#include<iostream>
using namespace std;

int main()
{
    int n, range;
    
    cout<<"Enter positive integer: "<<endl;
    cin>>n;
    
    cout<<"Enter Range: "<<endl;
    cin>>range;
    
    cout<<endl;
    
    for(int i=1; i<=range; i++)
    {
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    }
    
    return 0;
}
