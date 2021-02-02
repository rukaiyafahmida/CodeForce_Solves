#include <string>
#include <iostream>
#include <queue>
#include <algorithm>
#include <cmath>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>> n >> m;
    int a[m],x=10000,y,z;
    z=m-n+1;
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    sort(a,a+m);

    for(int i=0;i<z;i++)
    {
        y=a[n-1+i]-a[i];
        if(y>=0 && x>y)
        {
            x=y;
           // cout<<x<<endl;
        }
    }
        cout<<x<<endl;

    return 0;
}
