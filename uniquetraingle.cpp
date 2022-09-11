#include<iostream>
using namespace std;
int main()
{
int i,j,r,counter=0,flag=0;
cout<<" Enter the row number";
cin>>r;
for(i=1; i<=r; i++)

{
for(j=1;j<=r-i;j++)
cout<<" ";
for(;j<=2*r-1;j++)
{
if(i%2==0)
{

    if(j%2==0)
    {

        if(counter<i)
        {

        cout<<i;
        counter++;
        }
    }
    else
    cout<<" ";

}
else
{
    if(j%2!=0)
    {

        if(flag<i)
        {

        cout<<i;
        flag++;
        }

    }
    else
    cout<<" ";
    }


}
cout<<endl;

}
}


