#include<iostream>
using namespace std;
int main()
{
    int i , j,k,l,m,n ;
    for(i=5;i>=1;i--)
    {
        for(k=i-1;k>=1;k--)
        {
            cout<<" ";
        }
        for(j=i;j<=5;j++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
    for(l=2;l<=5;l++)
    {
        for(m=1;m<=l-1;m++)
        {
            cout<<" ";
        }
        for(n=l;n<=5;n++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
}
