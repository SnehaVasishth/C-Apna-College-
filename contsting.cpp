#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
   char *s="hello Sneha";
   for(int i=0; i<(sizeof("hello")); i++)
   cout<< s[i];
   cout<< *s;
   return 0;
}
