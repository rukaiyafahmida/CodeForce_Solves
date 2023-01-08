#include<bits/stdc++.h>
#include <iostream>
#include <cmath>
#include <utility>
#include <cstdlib>
 
using namespace std;
 
int main() {
    
    int n;
    cin >> n;
    pair<int, int> gift[n];
    for(int i =0; i<n; i++)
    {
        cin >> gift[i].first;
        gift[i].second = i+1;
    }
    sort(gift, gift + n);
    for(int i =0;i<n;i++)
    {
        cout << gift[i].second;
        if(i==n-1)
            cout <<endl;
        else
            cout<< " ";
        
    }
    return 0;
}
