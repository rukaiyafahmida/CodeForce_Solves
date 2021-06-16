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
    int t;
    cin>>t;

    for(int j=0;j<t;j++)
    {
        int n,check=0;
        cin>>n;
        int s[n],dif=1000000;
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        sort(s,s+n);
        for(int i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1])
            {
                check=1;
                break;
            }
            dif=min(dif,abs(s[i]-s[i+1]));
        }
        if(check == 1)
            cout<<0<<endl;
        else
            cout<<dif<<endl;

    }
}

