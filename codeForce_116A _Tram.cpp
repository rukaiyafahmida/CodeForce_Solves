#include<bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <cmath>
 
using namespace std;
 
int main() 
{
    int n, curr=0, max=-1;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        curr-=a;
        curr+=b;
        if (curr>max)
            max=curr;
    }
    cout <<max<<endl;
    return 0;
}
