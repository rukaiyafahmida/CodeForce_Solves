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
    long int t,a,b,x;
    cin>>t;
    for(long int i=0;i<t;i++)
    {
        cin>>a>>b;
        x=abs(a-b);
        x=ceil(x/10.0);
        cout<<x<<endl;
    }
}
 
