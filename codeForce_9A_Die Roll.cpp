#include<bits/stdc++.h>
#include <iostream>
#include <cctype>
#include <algorithm> 

using namespace std;
int main() {
    int y,w;
    cin >>y>>w;
    int m = max(y, w);
    string out;
    switch (m)
    {
    case 1:
        cout<<"1/1"<<endl;
        break;
    case 2:
        cout<<"5/6"<<endl;
        break;
    case 3:
        cout<<"2/3"<<endl;
        break;
    case 4:
        cout<<"1/2"<<endl;
        break;
    
    case 5:
        cout<<"1/3"<<endl;
        break;
    
    case 6:
        cout<<"1/6"<<endl;
        break;
    
    default:
        break;
    }
    return 0;
}
