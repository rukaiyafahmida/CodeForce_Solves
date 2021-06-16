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
    long int n,q;
    cin>>n;
    long int x[n];
    for(long int i=0; i<n; i++)
        cin>>x[i];
    sort(x,x+n);
    cin>>q;
    long int m;
    for(long int i=0; i<q; i++)
    {
        cin>>m;
        if(m>=x[n-1])
        {
            cout<<n<<endl;
            continue;
        }
        else if(m<x[0])
        {
            cout<<0<<endl;
            continue;
        }
        else
        {
            long int index= upper_bound(x,x+n,m)-x;
            cout<<index<<endl;

        }
    }

}

