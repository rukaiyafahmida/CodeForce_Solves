#include <string>
#include <cstring>
#include<stdlib.h>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    long int a[4],s[4];
    int r=0;
    memset(a, 0, sizeof(a));
    for(int i=0;i<4;i++)
    {
        cin>> s[i];
        for(int j=0;j<i;j++)
        {
            if(s[i]==s[j])
            {
                a[i]=1;
            }
        }
    }
    for(int i=0;i<4;i++)
    {
        r+=a[i];
    }

        cout<< r<<endl;
    return 0;
}
