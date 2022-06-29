#include<bits/stdc++.h>
using namespace std ;

int main()
{

    int i, j,k,l,m;
    for(i=4;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }

    for(k=1;k<=5;k++)
    {
        for(l=1;l<=k-1;l++)
        {
            cout<<" ";
        }
        for(m=k ;m<=5;m++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }



}
