#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int n,i,flag=0;
cout<<"enter the number";
cin>>n;
for(i=2;i<=sqrt(n);i++)
{
    if(i%n==0)
    {
    cout<<n<<" is not a prime number";
    flag=1;
    break;
}

}
if(flag==0)
cout<<n<<"is a prime number";

}
