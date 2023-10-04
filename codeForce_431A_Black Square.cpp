#include<bits/stdc++.h>
#include <iostream>
#include <cctype>
#include <algorithm> 

using namespace std;
int main() {
    int cal[4];
    for (int i = 0; i < 4; ++i) {
        cin >> cal[i];
    }
    string t;
    cin >> t;
    int t_len = t.length();
    int out_cal = 0;
    for(int i =0; i<t_len; i++)
    {
        switch (t[i])
        {
        case '1':
            out_cal+=cal[0];
            break;
        case '2':
            out_cal+=cal[1];
            break;
        case '3':
            out_cal+=cal[2];
            break;
        case '4':
            out_cal+=cal[3];
            break;
        
        default:
            break;
        }

    }
    cout<< out_cal<<endl;
    return 0;
}
