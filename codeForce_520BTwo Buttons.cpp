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
    int n,m,ans=0;
    cin>>n>>m;
    if(m==n)
    {
        cout<<0<<endl;
        return 0;
    }
    else if(m>n)
    {

        while(m>n)
        {
            if(m%2==0)
                m/=2;
            else
                m+=1;
            ans++;
        }
        ans+=n-m;
        cout<<ans<<endl;
        return 0;
    }
    else
    {
        cout<<n-m<<endl;
    }

}

