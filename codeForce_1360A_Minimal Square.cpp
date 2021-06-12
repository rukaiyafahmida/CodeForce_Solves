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

    int t,a,b,m;
    cin>> t;
    while(t>0)
    {
        cin>>a>>b;
        if(a>=b)
        {
            if(a>=b*2)
            {
                m=a;
            }
            else
            {
                m=b*2;
            }
        }
        else
        {
            if(b>=a*2)
            {
                m=b;
            }
            else
            {
                m=a*2;
            }
        }
        cout<<m*m<<endl;
        t--;
    }
}

