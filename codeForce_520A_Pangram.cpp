#include <string>
#include <cstring>
#include<stdlib.h>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    string a;
    int len;
      cin>>len>>a;
    int ch[26],r=0;
    memset(ch, 0, sizeof(ch));
    if(len>=26)
    {
        transform(a.begin(), a.end(), a.begin(), ::tolower);
        for(int i=0;i<len;i++)
        {
            ch[a[i]-97]=1;
        }
        for(int i=0;i<26;i++)
        {
            r+=ch[i];
        }
        if(r==26)
           cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    else
    cout<<"NO"<<endl;
    return 0;
}
