#include <iostream>
#include<cstring>
#include<string>
using namespace std;
int main( ) {
    string s1 = "Hello";
        char ch[] = { 'C', '+', '+'};
        string s2 = string(ch);
        cout<<s1<<endl;
        cout<<s2<<endl;
        char key[25], buffer[25];
            cout << "Enter the key string: ";
            getline(cin,key);
            cout << "Enter the buffer string: ";
             getline(cin,buffer);
            strcat(key, buffer);
            cout << "Key = " << key << endl;
            cout << "Buffer = " << buffer<<endl;
            string ss;
            getline(cin,ss);
            cout<< ss;



return  0;

}
