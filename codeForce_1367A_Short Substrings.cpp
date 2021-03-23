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
    int t;
    cin>>t;
    string b;
    for(int i=0;i<t;i++)
    {
        string a;
        cin>>b;
        int l=b.length();
        for(int j=0;j<l;j++)
        {
            if(j==0 || j==l-1|| j%2==0)
            {
                a.push_back(b[j]);
            }
        }

            cout<<a<<endl;
    }
}
 
