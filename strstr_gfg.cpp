#include<bits/stdc++.h>
using namespace std;
int main()
{
string s,x;
cin >>s>>x;
cout<< strstr(s,x);

}




int strstr(string s, string x)
{
    int flag=1;
    if((s.size())>= (x.size()))
    {
        for(int i=0 ;i< s.size();i++)
        {

            for(int j=0; j<(x.size());j++)
            {
                int m= i;
                if(s[i]== x[j])
               {

                for(int k=j; k<= (x.size()); k++)
                {
                    if(s[m]== x[k])
                    {
                        m++;
                        flag=1;

                    }
                    else
                    {j=0 ;
                        flag=0;
                        break;
                    }
                }
                if(flag==1)
                return (j);
                else
                break;
                }

                else
                {

                break;
                }

            }

        }
        if(flag==0)
        return(-1);
    }
    else
    return(-1);
}
