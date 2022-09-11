#include<iostream>
using namespace std;
int main()
{
int i,j,m=1,k,r;
cout<<"enter row number";
cin>>r;
for(i=r,j=1;j<=(2*r-1);j++)
{
cout<<"*";
}
cout<<endl;
i--;

for(;i>=1;i--)
{
k=i;
for(j=1; j<=i; j++)
cout<<"*";
k++;
j=k;

for(;j<(m*2-1+k);j++)
cout<<" ";
for(j=1; j<=i; j++)
cout<<"*";
m++;
cout<<endl;

}
for(i=1;i<=r; i++)
{

    for(j=1;j<=i; j++)
        cout<<"*";
    for(j=1;j<=(2*r-1-2*i);j++)
        cout<<" ";
    for(j=1;j<=i;j++)
        cout<<"*";
    cout<<endl;

}

}
