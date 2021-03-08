#include <string>
#include <cstring>
#include<stdlib.h>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    string a,b,c;
    cin>>a>>b>>c;

    int ch[26],len=c.length(),len2,check=0;
    memset(ch, 0, sizeof(ch));

    for(int i=0;i<len;++i)
    {
            ch[c[i]-65]+=1;
    }
    a.append(b);
    len2=a.length();
    for(int i=0;i<len2;i++)
    {
            ch[a[i]-65]-=1;
    }
    for(int i=0;i<26;++i)
    {
        if(ch[i]!=0)
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
