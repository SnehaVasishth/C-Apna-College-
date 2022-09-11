#include <bits/stdc++.h>
using namespace std;

int main()
{
  C style string
    char s1[] = "GeeksforsnehaGeeksforsneha123yahagodisgreat";
    char s2[] = "forsneha";
    cout<< strlen(s1)<<endl;
    char *p;

    p = strstr(s1, s2);
    cout<< strcat(s1,s2)<<endl;// s1[] is GeeksforsnehaGeeksforsneha123yahagodisgreatforsneha
    cout<<p <<endl<<s1<<endl<<s2<<endl; //p is forsnehaGeeksforsneha123yahagodisgreatforsneha
    char a[]="sneha";
    char b[]= "vasishth";
    cout<< strcpy(a,b)<<endl<<a<<endl<<b;// when we use strcpy, it deletes all the data stored earlier in a[] and new string is copied from b to a.
cout<<strcmp(s1,s2)<<endl;

C++ style string

string a="hello";
string b= "sneha";
cout<<a.size()<<endl;
string::iterator c;
for(c= a.begin(); c!= a.end();c++)
cout<< *c<<" ";
cout<< *(b.end()-1)<<" "<< *(a.begin()+2)<<endl;
cout<< a.insert(5,"vasishth")<<endl;
cout<< a.empty()<<endl;
cout<< a.find('l')<<endl;//its working or a.find('l') both are working
cout<< b.substr(1)<<endl<< a.substr(1,3)<<endl;
if(b.find("k")== string::npos)
cout<<"not found"<<endl;
b.push_back('G');// can push back one character at a time b.puxh_back("Vasishth")doesnt work
cout<< b<<endl;
b.pop_back();
cout<< b<<endl;


    return 0;
}

// strstr: Used for string searching. Finds and returns pointer to the first occurence of one string in another. Here also the 2nd string is searched in the1st string.
// for usimg c function for string delare them as array of character , don't declare the using string class.
