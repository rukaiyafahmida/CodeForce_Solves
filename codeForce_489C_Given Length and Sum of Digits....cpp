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
    int m,s;
    cin>>m>>s;
    string MIN,MAX;
    if(s==0)
    {
        if(m==1)
            cout<<"0 0"<<endl;
        else
            cout<<"-1 -1"<<endl;
        return 0;
    }

    else
    {
        int k,c=0;
        for(int i=0;i<m;i++)
        {
            k=min(s,9);
            MAX.push_back('0'+k);
            s-=k;
        }
        if(s>0)
        {
            cout<<"-1 -1"<<endl;
            return 0;
        }

        for(int i=m-1;i>=0;i--)
        {
                MIN.push_back(MAX[i]);
        }
        while(MIN[c]=='0')
            c++;  //finding the last non zero digit
        MIN[0]++;
        MIN[c]--; //subtracting from the last non zero digit

    }

        cout<<MIN+" "+MAX<<endl;
}

