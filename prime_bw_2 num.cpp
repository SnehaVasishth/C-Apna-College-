#include<iostream>
#include<cmath>
using namespace std;

bool isprime(int num)
{
int i;
for(i=2; i<=sqrt(num);i++)
{
    if(num%i==0)
    return (false);

}
return (true);

}


int main()
{

int a,b;
cout<<"enter the value of a and b";
cin>>a>>b;
for(int i=a;i<=b;i++)
    {
    if(isprime(i))
    {
    cout<<i<< "is the prime number"<<endl;

     }

    else
    cout<<i<<"is the composite number"<<endl;


}
return 0;

}
