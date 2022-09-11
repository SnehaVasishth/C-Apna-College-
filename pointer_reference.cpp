#include<bits/stdc++.h>
using namespace std;
int main()
{

void  *p;
string s="sneha";
p= &s;
cout<< *(string*)p<<endl;
int a=19;
p =&a;
cout<<*(int *)p<<endl;
char b[]= "vasishth";
p= b;
cout<<*(char *)(p+3);
cout<< s[2];
}
