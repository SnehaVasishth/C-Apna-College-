#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int n,last,sum=0,original;
cout<<"enter the number";
cin>>n;
original=n;
while(n>0)
{
last= n%10;
sum+= pow(last,3);
n=n/10;

}
cout<<sum<<endl;
if(original==sum)
cout<<original <<"armstrong number";
else
cout<<"not";

}
