#include<iostream>
using namespace std;
int main()
{
int i,j,k,r;
                                        cout<<"enter row number";
cin>>r;
for(i=1;i<=r;i++)
{
for(j=1; j<= r-i; j++)
cout<<" ";

for(j=1;j<=(2*i-1); j++)
{

if(j==1|| (j==(2*i-1)))
cout<<"*";
else
    cout<<" ";
}
cout<<endl;

}


for(i=r;i>=1;i--)
{
for(j=1; j<= r-i; j++)
cout<<" ";

for(j=1;j<=(2*i-1); j++)
{

if(j==1|| (j==(2*i-1)))
cout<<"*";
else
    cout<<" ";
}
cout<<endl;




}





}




