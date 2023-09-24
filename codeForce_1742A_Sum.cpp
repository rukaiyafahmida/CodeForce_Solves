#include<bits/stdc++.h>
#include <iostream>
#include <cctype>
#include <algorithm> 

using namespace std;
int main() {
    int t;
    cin >> t;
    for(int i =0; i<t; i++)
    {
        int a,b,c;
        cin >> a >> b>> c;

        int ab = a+b;
        if(ab ==c)
        {
            cout<<"YES"<<endl;
            continue;
        }


        int bc = c+b;
        if(bc ==a)
        {
            cout<<"YES"<<endl;
            continue;
        }


        int ac = a+c;
        if(ac ==b)
        {
            cout<<"YES"<<endl;
            continue;
        }
        cout<<"NO"<<endl;
    }
    return 0;
}


