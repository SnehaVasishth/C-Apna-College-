 #include<iostream>
 using namespace std;

 int fact(int num)
 {

 int i, factorial=1;
 for(i=1;i<=num;i++)
 factorial*= i;
 return(factorial);

 }



 int main()
 {

 int i,j,n;
 cin>>n;

 for(i=0;i<n;i++)
 {

    for(j=0;j<=i;j++)
    cout<<(fact(i)/(fact(j)* fact(i-j)))<<" ";
    cout<<endl;


 }
 return 0;
 }
