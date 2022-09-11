#include<iostream>
using namespace std;

void fib(int n)
{
int i,t1=0, t2=1, newterm=0;
for(i=1;i<=n;i++)
{
cout<<t1<<" ";
newterm= t1+ t2;
t1= t2;
t2= newterm;


}
return;
}

int main()
{

int n;
cin>>n;
fib(n);
return 0;

}
