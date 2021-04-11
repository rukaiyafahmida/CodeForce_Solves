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

    int n,t,j=0;
    cin>>n>>t;
    long int a[n-1],r;
    for(int i=0;i<n-1;i++)
    {
        cin>>a[i];

    }
    for(j=0;j<n-1;)
    {
        j = a[j]+j;
        if(j==t-1)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }

        cout<<"NO"<<endl;


}

