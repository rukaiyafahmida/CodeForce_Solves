#include<bits/stdc++.h>
#include <string>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <utility>
using namespace std;


int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,c=0;
        cin>>n;
        int a[n];
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
        sort(a,a+n);

        for(int j=1;j<n;j++)
        {
            if(a[j]-a[j-1]>1)
            {
                c=1;
                break;
            }
        }
        if(c==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}

