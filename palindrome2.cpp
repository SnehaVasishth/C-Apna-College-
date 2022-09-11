#include<iostream>
using namespace std;
int main()
{
int i,r, k,j ;
cout<<"enter the value of number of rows";
cin>>r;
for(i=1; i<=r; i++)
{
    k=i;
for(j=1; j<=r-i; j++)
cout<< "  ";
for(j=1; j<=i; j++)
cout<<k--<<" ";
k=2;
for(j=1;j<=i-1;j++)
cout<<k++<<" ";
cout<<endl;
}
}
