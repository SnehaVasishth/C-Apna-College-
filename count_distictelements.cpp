#include<bits/stdc++.h>
using namespace std;

void put(int arr[], int n)
{
for(int i=0; i<n; i++)
cin>> arr[i];

}

int count_distinct(int arr[], int n)
{
int flag=1, counter=0;
for(int i=0;i < n; i++)
{
flag=1;

for(int j=(i-1); j>=0; j--)
{

if(arr[i]== arr[j])
{
  flag=0;
break;
}
}

if(flag== 1)
counter++;
}
return(counter);

}


int main()
{
int n;
cin >> n;
int arr[n];
put(arr,n);
cout<< count_distinct(arr,n);
return (0);


}
