#include<bits/stdc++.h>
#include <iostream>
#include <cmath>
#include <utility>
#include <cstdlib>

using namespace std;

int main() {

    int t;
    cin >> t;
    for(int j =0 ;j<t;j++)
    {
            int n,index;
            cin >> n;
            pair<int, int> g[n];
            for(int i =0; i<n; i++)
            {
                cin >> g[i].first;
                g[i].second = i+1;
            }
            sort(g, g + n);
            if(g[0].first==g[1].first)
            {
                index = g[n-1].second;
            }
            else
            {
                index = g[0].second;
            }
            cout<<index<<endl;
    }

    return 0;
}
