#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k,a=0;
    cout<<"Enter the no of rows:"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"\n";
        for(j=0;j<=i;j++)
        {
            if(j==a)
            {
                cout<<"d";
            }
            else
            {
                cout<<"*";
            }
        }a++;
    }
}
