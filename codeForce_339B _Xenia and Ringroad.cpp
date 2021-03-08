#include <string>
#include <cstring>
#include<stdlib.h>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int main()
{
    long int n,m;
    long long r=0;
    cin>>n>>m;
    long int w[m];
    for(long int i=0;i<m;i++)
    {
        cin>>w[i];
        if(i==0)
        {
            r=w[i]-1;
        }
        else
        {
            if(w[i]<w[i-1])
            {
                r+=(w[i]+(n-w[i-1]));
            }
            else if(w[i]>w[i-1])
            {
                r+=(w[i]-w[i-1]);
            }
        }
    }
    cout<<r<<endl;
    return 0;
}
