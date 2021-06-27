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
    int t;
    cin>>t;
    for(int d=0; d<t; d++)
    {

        vector <int> v;

        int i,digit,c=0,res=0,x=1;
        cin>>i;
        digit=i%10;
        while(i != 0 )
        {
            v.push_back(i%10);
            i = i/10;
            c++;
        }
        if(c==2)
            c=3;
        else if(c==3)
            c=6;
        else if(c==4)
            c=10;

        res += ((digit-1)*10 + c);
        cout <<res<< endl;

    }
}

