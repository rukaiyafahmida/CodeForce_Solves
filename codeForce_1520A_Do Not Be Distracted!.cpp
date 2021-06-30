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
    int t,n,check[26];
    cin>>t;
    for(int d=0; d<t; d++)
    {
        memset(check, 0, sizeof(check));

        bool okay = true; //if done correctly print yes
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n-1;i++)
        {

            if(check[s[i]-65]==0)
            {
                if(s[i] != s[i+1])
                    //continue;
               // else
                    check[s[i]-65]=1;

            }
            else
            {
                okay=false;
                break;
            }

        }

        if(okay && check[s[n-1]-65]==0)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;




    }
}

