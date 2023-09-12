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
        string c;
        cin >> c;
        transform(c.begin(), c.end(), c.begin(), ::tolower);
        if(c == "yes")
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        
    }
    return 0;
}
