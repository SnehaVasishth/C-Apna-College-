#include<iostream>
using namespace std;
int main()
{
int n, k,i=1 ,j=1;
cout<<"enter the value of number of rows";
cin>>n;
for(i=1; i<=n; i++)
{
    k=i;
    for(j=1; j<= (n-i); j++)
        {
            cout<<"  ";
        }
    for(;j<= n; j++)
        {
            cout<<k<<" ";
            k--;
        }
k=1;

    for(;j< (n+i); j++)
        {
            k++;
            cout<<k<<" ";
        }

    for(; j<=(2*n-1); j++)
    {
           cout<<"  ";
    }
    cout<< endl;
}
return 0;

}




