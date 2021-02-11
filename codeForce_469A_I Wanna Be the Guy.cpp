#include <string>
#include <cstring>
#include<stdlib.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,p,q,x,sum=0;
    cin>> n;
    int check[n];
    memset(check, 0, sizeof(check));
    cin>>p;

    for(int i=0;i<p;i++)
    {
        cin>>x;
        if(check[x-1]==0)
        {
            check[x-1]=1;
        }
    }
    cin>>q;

    for(int i=0;i<q;i++)
    {
        cin>>x;
        if(check[x-1]==0)
        {
            check[x-1]=1;
        }
    }
    for(int i=0;i<n;i++)
    {
        sum+=check[i];
    }
    if(sum!=n)
    {
        cout<<"Oh, my keyboard!"<<endl;
    }
    else
        cout<<"I become the guy."<<endl;
    return 0;
}
