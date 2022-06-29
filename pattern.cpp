#include<iostream>
using namespace std;
int main()

{

    int i,j ,k,m,n,o;
    for(i=5;i>=1;i--)
    {
         for(k=i-1;k>=1;k--)
        {
            cout<<" ";
        }
        for(j=i;j<=5;j++)
        {
            cout<<"*";
        }
        cout<<"\n";

    }
    for(m=2;m<=5;m++)
    {
        for(n=1;n<=m-1;n++)
        {
            cout<<" ";
        }
        for(o=m;o<=5;o++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }

}
