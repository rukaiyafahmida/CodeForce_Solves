#include<bits/stdc++.h>
#include <string>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <utility>
using namespace std;


int main()
{
    int arr[] ={5,15,30,50,75,105,140,180,225,275};
    int n,k,t;
    cin>>n>>k;
    t=240-k;
    if(t>=arr[n-1])
    {
        cout<<n<<endl;
    }
    else
    {
    for(int i=0;i<n;i++)
    {
        if(t>=arr[i])
        {
        }
        else
        {

            cout<<i<<endl;
            break;
        }
    }

    }

}

