#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k,l,m;
    cout<<"ENTER THE HIEGHT OF DIAMOND:"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"\n";
        for(j=n;j>i;j--)
        {
            cout<<"*";
        }
        for(k=0;k<=j;k++)
        {
            cout<<" ";
        }
        for(l=0;l<=i;l++)
        {
            cout<<" ";
        }
        for(m=n;m>=l;m--)
        {
            cout<<"*";
        }

    }
    for(i=0;i<n;i++)
    {
        cout<<"\n";
        for(j=0;j<=i;j++)
        {
            cout<<"*";
        }
        for(k=n;k>=j;k--)
        {
            cout<<" ";
        }
        for(l=n;l>=j;l--)
        {
            cout<<" ";
        }
        for(m=0;m<=l;m++)
        {
            cout<<"*";
        }
    }
    return 0;
}

