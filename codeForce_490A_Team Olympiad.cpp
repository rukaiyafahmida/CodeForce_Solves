
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

    int n,pCount=0,mCount=0,peCount=0,res;
    cin>> n;
    int t[n];
    stack <int> p,m,pe;
    for(int i=0;i<n;i++)
    {
        cin>>t[i];
        if(t[i]==1)
        {
            pCount++;
            p.push(i+1);
        }
        else if(t[i]==2)
        {
            mCount++;
            m.push(i+1);
        }
        else
        {
            peCount++;
            pe.push(i+1);
        }
    }
    res=min(peCount,min(pCount,mCount));
    cout<<res<<endl;
    for(int j=0;j<res;j++)
    {
        cout<<p.top()<<" "<<m.top()<<" "<<pe.top()<<endl;
        p.pop();
        m.pop();
        pe.pop();
    }

}

