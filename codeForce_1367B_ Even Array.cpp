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

    int t,n;
    cin>> t;
    while(t>0)
    {
        cin>>n;
        int a[n],odd=0,even=0,moves=0,fix=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
            {
                even++;
                if(i%2!=0)
                    fix++;

            }
            else
            {
                odd++;
                if(i%2==0)
                    fix++;
            }

        }

        if(abs(odd-even)<=1)
        {
            if(fix%2!=0)
                cout<<-1<<endl;
            else
                cout<<floor(fix/2)<<endl;

        }
        else
            cout<<-1<<endl;

        t--;
    }
}

