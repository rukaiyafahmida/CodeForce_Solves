#include<bits/stdc++.h>
#include <string>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <utility>
using namespace std;


int main()
{
    int t,n;
    cin>> t;
    for(int i=0; i<t; i++)
    {
        cin>>n;
        vector <int> v;
        int x=0;
        while(n != 0 )
        {
            int y =((int)(pow(10, x) + 0.5))*(n%10) ;
            if(y!=0)
                v.push_back(y);
            x++;
            n = n/10;
        }
        cout<<v.size()<<endl;
        for(int i=v.size()-1; i>=0; i--)
        {
            {
                 cout << v[i] << " ";
            }
        }
        cout<<endl;
    }

}

