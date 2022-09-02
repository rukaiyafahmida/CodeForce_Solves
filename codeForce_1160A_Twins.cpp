#include<bits/stdc++.h>
#include <string>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <utility>
#include <cstdlib>
#include <vector>


using namespace std;

int main()
{
    int n,sum=0,ans=0,c=0;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    sum/=2;
    sort(a,a+n);
    for(int i=n-1;i>=0;i--)
    {
        ans+=a[i];
        c++;
        if(ans>sum)
            break;
    }

    cout<<c<<endl;
}

