#include<bits/stdc++.h>
#include <string>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <utility>
#include <cstdlib>
#include <vector>


using namespace std;

int main()
{
    int n,a,b,c,d;
    cin>>n;
    while(true)
    {
        n++;
        a=  n%10;
        b= (n/10)%10;
        c= (n/100)%10;
        d= (n/1000)%10;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
            break;
    }

    cout<<n<<endl;
}

