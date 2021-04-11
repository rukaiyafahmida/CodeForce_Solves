#include<bits/stdc++.h>
#include <string>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <utility>
#include <cstdlib>

using namespace std;


int main() {
    int n;
    cin>>n;
    long int a[n],m=0,ans=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        m=max(a[i],m);
    }
    for(int i=0;i<n;i++)
    {
        ans+=(m-a[i]);
    }
    cout<<ans<<endl;


}

