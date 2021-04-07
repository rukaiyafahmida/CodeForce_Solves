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

    int n,k,ans=0,check=0;
    cin>>n>>k;
    int s[n],occupied[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        occupied[i]=0;

    }
    for(int i=0;i<n;i++)
    {
        if(s[i]+k<=5 && occupied[i]==0)
        {
            occupied[i]=1;
            check++;
            if(check==3)
            {
                ans++;
                check=0;
            }
        }
    }

    cout<<ans<<endl;

}

