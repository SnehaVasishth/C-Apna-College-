#include<bits/stdc++.h>
using namespace std;




long long int factorial(int N){
        long long int fact=1;
        for(int i=1;i<=N; i++)
        fact *= i;
        return(fact);
        //code here
    }


    int main()
    {
    int n;
    cin>>n;
    cout<< factorial(n);
    return 0;

    }
