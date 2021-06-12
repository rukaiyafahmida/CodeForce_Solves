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
        long int a[n],b[n];
        long long int moves=0,minA=10000000000,minB=10000000000;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<minA)
                minA=a[i];

        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
            if(b[i]<minB)
                minB=b[i];
        }
        for(int i=0;i<n;i++)
        {
            moves+=max(a[i]-minA,b[i]-minB);
        }
        cout<<moves<<endl;
        t--;
    }
}

