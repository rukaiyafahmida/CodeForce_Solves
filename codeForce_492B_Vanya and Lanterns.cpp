#include <string>
#include <cstring>
#include<stdlib.h>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int n,c;
    long int l,diff;
    cin>>n>>l;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a, a + n);
    diff=a[0]*2;
    for(int i=1;i<n;i++)
    {
        c=a[i]-a[i-1];
        if(c>diff)
            diff=c;
    }
    c=(l-a[n-1])*2;
    if(diff<c)
        diff=c;
    printf("%llf\n",(diff*1.0)/(2.0));
    return 0;
}
