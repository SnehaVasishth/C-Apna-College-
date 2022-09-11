#include<iostream>
using namespace std;
int main()
{

int i,j,n;
cout<<"enter the value of row\n";
cin>>n;
for(i=n; i>0; i--)
{
for(j=0; j<i; j++)
cout<<"* ";
cout<<endl;

}
return 0;
}
