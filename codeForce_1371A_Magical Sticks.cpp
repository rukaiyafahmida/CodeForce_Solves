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
    int t;
    cin>>t;
    long long int n;
    for(int d=0; d<t; d++)
    {
        cin>>n;
        if(n==1)
        {
            cout<<n<<endl;
            continue;
        }
        if(n%2==0)
            cout<<(n/2)<<endl;
        else
            cout<<(n/2)+1<<endl;
    }
}

