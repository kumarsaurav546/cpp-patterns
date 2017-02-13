#include<iostream>
using namespace std;
int main()
{
    int i,j;
    char input,alphabet='A';
    cout<<"Enter the last alphabet you want :"<<endl;
    cin>>input;
    for(i=0;i<=(input-'A');i++)
    {

            for(int j=0;j<=i;j++)
            {
                cout<<alphabet;
            }
            alphabet++;
            cout<<"\n";
    }


}
