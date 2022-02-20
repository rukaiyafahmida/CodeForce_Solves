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
    int t,n;
    cin>> t;

    for(int i=0;i<t;i++)
    {
        cin>>n;

        if( n <2020)
        {
            cout<<"NO"<<endl;
            continue;
        }
        if(n % 2020 <=n/2020 )
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }


}

