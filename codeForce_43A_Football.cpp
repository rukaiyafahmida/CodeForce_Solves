#include<bits/stdc++.h>
#include <iostream>
#include <cctype>
#include <algorithm> 

using namespace std;
int main() {
    int t, frst=0, scnd=0;
    cin >>t;
    string f="", s="";
    for (int i= 0; i<t;i++)
    {
        string team;
        cin >>team;

        if(f == "")
            f = team;
        else if (s=="" && f!=team)
            s=team;
        
        if( team ==s)
            scnd++;
        else if( team ==f)
            frst++;  
    }
    if(frst> scnd)
        cout<<f<<endl;
    
    else if(scnd>frst)
        cout<<s<<endl;
    return 0;
}
