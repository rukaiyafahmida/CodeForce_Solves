
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
    int a,b,tot=0,x;
    cin>>a>>b;
    tot=a;
    while(true)
    {
        x=a/b;
        a=x+ (a%b);
        tot+=x;
        if(x<1)
            break;
    }
        cout<<tot<<endl;


}

