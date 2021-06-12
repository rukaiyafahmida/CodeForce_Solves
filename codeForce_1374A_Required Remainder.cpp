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

    long long int n,x,y,k,rem=0,qou=0;
    int t;
    cin>> t;
    while(t>0)
    {
        cin>> x>>y>>n;
        rem=n%x;
        qou=n/x;
        if(rem==y)
        {
            cout <<n<<endl;
            t--;
            continue;
        }
        else if(rem<y)
        {
            cout<< ((qou-1)*x) +y<< endl;
            t--;
            continue;
        }
        else
        {
            cout<< (qou*x) +y<<endl;
            t--;
        }
    }
}

