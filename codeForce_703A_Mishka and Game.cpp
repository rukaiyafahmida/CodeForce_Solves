#include<bits/stdc++.h>
#include <string>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <utility>
#include <cstdlib>

using namespace std;


int main()
{

    int n,mi=0,ch=0,m,c;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>m>>c;
        if(m>c)
            mi++;
        else if(c>m)
            ch++;
    }
    if(mi==ch)
        cout<<"Friendship is magic!^^"<<endl;
    else if(mi>ch)
        cout<<"Mishka"<<endl;
    else
        cout<<"Chris"<<endl;

}

