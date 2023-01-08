#include<bits/stdc++.h>
#include <iostream>
#include <cmath>
#include <utility>
#include <cstdlib>

using namespace std;

int main() {
    
    int n,count=0;
    cin >> n;
    pair<int, int> teams[n];
    for(int i =0; i<n; i++)
        cin >> teams[i].first >> teams[i].second;
    
    for(int i =0 ; i <n ; i ++)
    {
        for(int j=0; j<n ;j++)
        {
            if(teams[i].first == teams[j].second)
                count++;
        }
    }
    cout << count << endl;
    return 0;
}
