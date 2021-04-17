#include<bits/stdc++.h>
#include <string>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <utility>
#include <cstdlib>

using namespace std;


int main() {

    long long int t;
    cin>> t;
    for(int i=0;i<t;i++)
    {

        long long int n,d,x;
        cin>>n;

        for(int j=2;j<n;j++)
        {
            x= ((pow(2,j))-1);

           // cout<<x<<endl;
            d=n/x;
            if(n%x ==0)
            {
                break;

            }

        }
        cout<<d<<endl;

    }

}

