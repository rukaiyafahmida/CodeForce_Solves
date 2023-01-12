#include<bits/stdc++.h>
#include <iostream>
#include <cmath>
#include <utility>
#include <cstdlib>

using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n],c=n,s=0,d=0,f=0,r;
    for(int i = 0; i <n ; i++)
    {
        cin >> a[i];
    }
    int i=0, j = n-1;
    do
    {
        if(a[i]>a[j])
        {
            r = a[i];
            i++;
        }
        else
        {
            r = a[j];
            j--;
        }
        if(f==0)
        {
            s+=r;
            f=1;
        }
        else
        {
            d+=r;
            f=0;
        }
        c--;
    }while(c>0);
    cout<<s<<' '<<d<<endl;
    return 0;
}
