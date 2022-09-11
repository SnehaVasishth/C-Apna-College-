#include<iostream>
using namespace std;
int main()
{
int i,n, k,j ;
cout<<"enter the value of number of rows";
cin>>n;
for(i=1; i<=n; i++)
{
    k=i;
    for(j=1; j<= (n-i); j++)
        {
            cout<<"  ";
        }
    for(;j<(j+i); j++)
        {
            cout<<k<<" ";
            k--;
        }
    k=1;

    for(;j< (j+i-1); j++)
        {
             k++;

            cout<<k<<" ";
        }



    for(; j< (j+n-i); j++)
    {
           cout<<"  ";
    }
    cout<< endl;
}
return 0;

}




