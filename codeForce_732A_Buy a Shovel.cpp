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
    int k,r,c=0,temp;
    cin>>k>>r;
    for(int i=1;i<10;i++)
    {
        if( (k*i)%10 ==0 ||((k*i)-r)%10==0 || (k-r)%10==0)
        {
            c=i;
            break;

        }
        c++;

    }
    if(k==1)
        c=r;
    cout<<c<<endl;
}

