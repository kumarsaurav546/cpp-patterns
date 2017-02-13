#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k=1,l,m;
    cout<<"enter the no of rows:"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"\n";
        for(j=0;j<=i;j++)
        {
            cout<<k<<" ";
            k++;
        }
    }
}
