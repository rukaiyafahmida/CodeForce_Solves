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
    int n,mi=10002,ma=-1,r=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>ma)
        {
            ma=a[i];
            r++;
        }
        if(a[i]<mi)
        {
            mi=a[i];
            r++;
        }
    }
    cout<<r-2<<endl;
}

