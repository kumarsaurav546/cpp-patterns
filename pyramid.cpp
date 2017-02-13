#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k,l,m;
    cout<<"enter the no of rows:"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"\n";
        for(int j=n+15;j>i;j--)
        {
            cout<<" ";
        }
        for(k=0;k<=i;k++)
        {
            cout<<"*";
        }
        for(k=0;k<i;k++)
        {
            cout<<"*";
        }
    }
    return 0;
}
