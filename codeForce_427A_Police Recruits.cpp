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
    int n,crime=0,police=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==-1)
        {
            crime++;
            if(police>0)
            {
                police--;
                crime--;

            }
        }
        else
        {
            police+=a[i];
        }

    }
    cout<<crime<<endl;
}
 
