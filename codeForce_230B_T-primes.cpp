#include<bits/stdc++.h>
#include <string>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

long long int N=1000000;
bool mark[1000000];
void sieve()
{
    int i,j;
    memset(mark,true,sizeof(mark));
    for(i=4;i<N;i+=2)
        mark[i]=false;
    for(i=3;i*i<N;i+=2)
    {
        if(mark[i])
        {
            for(j=i*i;j<N;j+=i*2)
                mark[j]=false;
        }
    }
    mark[1]=false;
    //if(mark[n]) -> Prime
}
int main()
{
    sieve();
    long int n;
    cin>>n;
    long long int x[n];
    for(long int i=0; i<n; i++)
    {
        cin>>x[i];
        long long int z=sqrt(x[i]);

        if((z*z == x[i]) && x[i]!=1)
        {
            if(mark[z])
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }

        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
