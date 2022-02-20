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
    int t,n;
    cin>> t;

    for(int j=0;j<t;j++)
    {
        cin>>n;
        int sumOne=0,sumTwo=0,sumTot=0,w;

        for(int i=0;i<n;i++)
        {
            cin>>w;
            sumTot+=w;
            if(w==1)
                sumOne++;
            else
                sumTwo++;
        }

        if((sumOne+sumTwo*2) % 2 != 0 )
        {
            cout<<"NO"<<endl;
            continue;
        }
        if((sumTwo) % 2 != 0 &&(sumOne == 0 || sumOne % 2 !=0))
        {
            cout<<"NO"<<endl;
            continue;
        }
        else
        {
            cout<<"YES"<<endl;
        }

    }


}

