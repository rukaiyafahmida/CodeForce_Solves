#include <string>
#include <iostream>
#include <queue>
#include <algorithm>
#include <cmath>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,y=0;
    cin>>n;

    for(int i=0;i<n;++i)
    {
        cin>>x;
        y+=x;
    }
    printf("%lf\n",(y*1.0)/(n*1.0));
    return 0;
}
