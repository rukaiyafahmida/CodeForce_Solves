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
    int k,ar[1000],t,u=1;

    for(int j=0;j<1000;)
    {
        if( (u%3) != 0 && (u%10) != 3)
        {
            ar[j]=u;
            j++;
        }
        u++;
    }
    cin>> t;

    for(int i=0;i<t;i++)
    {
        cin>>k;
        cout<<ar[k-1]<<endl;

    }


}

