#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter no of rows:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"\n";
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
    }
    for(int k=0;k<n;k++)
    {
        cout<<"\n";
        for(int l=n;l>k;l--)
        {
            cout<<"*";
        }
    }
}

