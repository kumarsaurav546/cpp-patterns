#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k,l,m;
    cout<<"enter the no of rows:"<<endl;
    cin>>n;
    for( i=0;i<n;i++)
    {
for(j=0;j<=i;j++)
        {
            cout<<" ";
        }
        for( k=n;k>=j;k--)
        {
            cout<<"*";

        }
        for(l=n;l>i;l--)
        {
            cout<<"*";
        }
        for(m=0;m<i;m++)
        {
            cout<<" ";
        }
    }}
