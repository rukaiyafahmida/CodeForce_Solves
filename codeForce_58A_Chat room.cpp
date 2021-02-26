#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    int h1=1,e2=1,l3=1,l4=1,o5=1;
    cin >> str;
    int l = str.length();

    for(int i=0; i<l; i++)
    {
        if(str[i]=='h')
        {
            h1=0;
            for(int j=i+1; j<l; j++)
            {
                if(str[j] == 'e')
                {
                    e2=0;
                    for(int k=j+1; k<l; k++)
                    {
                        if(str[k] == 'l')
                        {
                            l3=0;
                            for(int m=k+1; m<l; m++)
                            {
                                if(str[m] == 'l')
                                {
                                    l4=0;
                                    for(int n=m+1; n<l; n++)
                                    {
                                        if(str[n] == 'o')
                                        {
                                            o5=0;
                                        }

                                    }

                                }


                            }

                        }
                    }
                }

            }
        }
    }
    int wee=h1+e2+l3+l4+o5;
    if(wee>0)
    {
        cout << "NO" <<endl;
    }
    else
    {
        cout << "YES" <<endl;
    }
}


