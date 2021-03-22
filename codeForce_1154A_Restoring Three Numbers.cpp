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
    long int x[4],a,b,c;
    cin>>x[1]>>x[2]>>x[3]>>x[0];
    sort(x,x+4);

        a=x[3]-x[0];
        b=x[2]-a;
        c=x[1]-a;

    cout<<a<<" "<<b<<" "<<c;


}

