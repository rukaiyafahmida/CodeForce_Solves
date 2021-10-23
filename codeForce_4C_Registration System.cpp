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
    int n;
    cin>>n;
    pair<string, int> name[n];
    for(int i=0;i<n;i++)
    {
        cin>>name[i].first;
        name[i].second=-1;
        int c=0;
        for(int j=i-1;j>=0;j--)
        {
            if(name[i].first == name[j].first)
            {
                c=name[j].second+1;
                break;
            }

        }
        name[i].second=c;
        if(c==0)
            cout<<"OK"<<endl;
        else
            cout<<name[i].first<<name[i].second<<endl;
    }
}

