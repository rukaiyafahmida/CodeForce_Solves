#include<bits/stdc++.h>
#include <string>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <utility>
#include <cstdlib>

using namespace std;


int main()
{
    int t=0,n;
    string s;
    string out;
    cin>> s;
    n=s.size();

    //  .  0
    //  -. 1
    //  -- 2

    for(int j=0;j<n;j++)
    {

        if(s[j]=='.' && t==0)
        {

                out.append("0");
                continue;
        }

        if(s[j]=='-' && t==0)
        {
            t=1;
            continue;
        }

        if (s[j]=='-' && t==1)
            {
                out.append("2");

                t--;
            }

       else if (s[j]=='.' && t==1)
            {
                out.append("1");

                t--;
            }



    }
    cout<<out<<endl;


}

