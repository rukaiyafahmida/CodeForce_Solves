
#include<bits/stdc++.h>
#include <stack>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <utility>
#include <cstdlib>

using namespace std;


int main()
{
    int m,n,tot=0,x;
    cin>>m>>n;
    tot=m;
    while(true)
    {
        x=m/n;
        m=x+ (m%n);
        tot+=x;
        if(x<1)
            break;
    }
        cout<<tot<<endl;


}

