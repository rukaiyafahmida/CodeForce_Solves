#include <string>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int n,r=0,one=0,two=0,three=0,s,q;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >>a[i];
        if(a[i]==4)
        {
            r++;
        }else if(a[i]==3)
        {
            three++;
        }else if(a[i]==2)
        {
            two++;
        }else
        {
            one++;
        }
    }
    r=r+(two/2);
    two =two%2;
 if( one>=three){
    r=r+three;
    one=one-three;
    three=0;
    r=r+(one/4);
    one=one%4;
    if((one+(two*2))<=4 && (one+(two*2))>0){
    r++;
    one=0;
    two=0;
    }else if(one==3 && two==1){
    r=r+2;
    one=0;
    two=0;
    }
    }

    else if(one<three){
    r=r+one;
    three=three-one;
    one=0;
    r=r+three+two;
    }
    cout << r <<endl;

    return 0;
}
