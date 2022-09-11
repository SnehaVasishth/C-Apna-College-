#include <iostream>
using namespace std;
void func(int &);
int main()
{
  int i;
  int &a=i;
  std::cout << "The address of 'a' variable is : " <<&a<< std::endl;
  std::cout << "The address of 'i' variable is : " <<&i<< std::endl;
  return 0;
}  
