#include <string>
#include <cstring>
#include<stdlib.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,s=0,maxium=-1,minimum,r; //s=shortest person index,t=tallest person index
    cin>>n;
    int a[n],t=n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(i>0)
        {
            if(minimum >= a[i])
                {
                    s=i;
                    minimum=a[i];
                }
        }
        else
            minimum=a[i];
    }
    for(int i=n-1;i>=0;i--)
    {
            if(maxium <= a[i])
                {
                    t=i;
                    maxium=a[i];
                }
    }
    r=t+(n-s-1);
    if(s>t)
        cout<<r<<endl;
    else
        cout<<r-1<<endl; //because of swapping they might cross each other

    return 0;
}
