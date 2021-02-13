#include <string>
#include <cstring>
#include<stdlib.h>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int meaningless(long long a,long long b)
{
    double x= a*1.0/b;
    return (ceil(x)*b)-a;
}
int main()
{
    int t;
    cin>>t;
    long long int a,b,r[t];
    for(int i=0;i<t;i++)
    {
        cin>>a>>b;
        r[i]=meaningless(a,b);
    }
    for(int i=0;i<t;i++)
    {
        cout<<r[i]<<endl;
    }
    return 0;
}
