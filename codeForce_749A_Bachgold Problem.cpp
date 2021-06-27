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
    long int n,x;
    cin >> n;

    x =  floor(n/2);
    cout<<x<<endl;

    for(int i=0;i<x-1;i++)
        cout<<2<<" ";

    if(n%2==0)
    {
        cout<<2<<endl;
    }
    else
    {
        cout<<3<<endl;
    }
}

