#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the no of rows:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"\n";
        for(int j=n;j>i;j--)
        {
            cout<<"*";
        }
    }
    return 0;
}




