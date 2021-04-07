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

    int x[3],dab,dac,dbc,ans;

    cin>>x[0]>>x[1]>>x[2];

    sort(x,x+3);
    dab=x[1]-x[0];
    dbc=x[2]-x[1];
    dac=x[2]-x[0];

    ans= min(dab+dbc,min(dab+dac,dbc+dac));
    cout<<ans<<endl;

}

