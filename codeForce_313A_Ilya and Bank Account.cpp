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

    long int n;
    cin>> n;

    if(n>=0)
        cout<<n<<endl;
    else
    {
        vector <int> v;
        long int i = abs(n);

        while(i != 0 )
        {
            v.push_back(i%10);
            i = i/10;
        }
        if(v.size()==1)
        {
            cout<<0<<endl;
            return 0;
        }
        if(v.size()==2 && v[0]==0 )
            cout <<"";
        else
            cout <<"-";
        if(v[0]>v[1])
        {

            for(int i=v.size()-1; i>0; i--)
            {
                cout << v[i];
            }
            cout <<endl;

        }
        else
        {

            for(int i=v.size()-1; i>=0; i--)
            {
                if(i!=1)
                {
                    cout << v[i];
                }
            }
            cout <<endl;

        }
    }



}

