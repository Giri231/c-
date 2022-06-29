#include<iostream>
using namespace std;
int main()

{

    int i, j,k,l,m,n;
    for(i=1;i<=5;i++)
    {
        for(k=1;k<=i-1;k++)
        {
            cout<<" ";
        }
        for(j=i;j<=5;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    for(l=4;l>=1;l--)
    {
        for(m=l-1;m>=1;m--)
        {
            cout<<" ";
        }
        for(n=l;n<=5;n++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}
