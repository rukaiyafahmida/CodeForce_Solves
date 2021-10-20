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
    int n, k, l, c, d, p, nl, np, drink,lemon, salt,ans;
    cin>>n>> k>> l>> c>> d>> p>> nl>> np;
    drink=((k*l)/nl)/n;
    lemon=(c*d)/n;
    salt= (p/np)/n;
    ans=min(drink,min(salt,lemon));
    cout<<ans<<endl;
}

