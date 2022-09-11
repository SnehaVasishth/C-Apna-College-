#include<iostream>
using namespace std;
int main()
{
int i,j,m=1,k,r;
cout<<"enter row number";
cin>>r;


for(i=1;i<=r;i++)
{
for(j=1;j<=r-i;j++)
cout<<" ";
for(j=1;j<=r;j++)
{
if(i==1||i==r||j==1||j==r)
cout<<"*";
else
cout<<" ";
}
cout<<endl;

}
}
