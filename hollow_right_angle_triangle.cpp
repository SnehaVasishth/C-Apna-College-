#include<bits/stdc++.h>
using namespace std;


void triangle(int s){
for(int i=1; i<=s; i++)
{
    for(int j=1; j<= i; j++)
    {
        if((i==1)||(j== 1)||(j== i)||(i==s))
        cout<<"*"<<"  ";
        else
        cout<< "  ";


    }
    cout<< endl;
}

    //Write your code here

}

//{ Driver Code Starts.

int main() {

	int t; cin>>t;

	while(t--){
	    int s; cin>>s;
	    triangle(s);
	}
}
// } Driver Code Ends
