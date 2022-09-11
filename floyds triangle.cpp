#include<iostream>
using namespace std;
int main()
{
int i,j,n,counter=0;
cout<<"enter the row number";
cin>>n;

for(i=0; i<=n;i++)
{

for(j=0; j<=i ;j++)
{
++counter;
cout<<counter<<"  ";
}
cout<<endl;

}
return 0;

}
