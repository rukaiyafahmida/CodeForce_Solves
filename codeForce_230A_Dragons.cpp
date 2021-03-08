#include <string>
#include <cstring>
#include<stdlib.h>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int main()
{
    int n,s,check=0;
    cin>>s>>n;
    pair <int,int> p[n];
    for(int i=0;i<n;i++)
    {
        cin>>p[i].first>>p[i].second;

    }
    sort(p,p+n);

    for(int i=0;i<n;i++)
    {
        if(s>p[i].first)
        {
            s+=p[i].second;
        }
        else
        {
            check=1;
            break;
        }
    }
    if(check==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
