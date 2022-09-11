#include<iostream>
using namespace std;
int main()
{
int i,j,n;
cout<<" Enter the row number";
cin>>n;
for(i=1; i<=n; i++)
{
for(j=1; j<= i+1; j++)
cout<<"1";
for(; j< 3*i; j++)
cout<<"2";
cout<< endl;
}
}
