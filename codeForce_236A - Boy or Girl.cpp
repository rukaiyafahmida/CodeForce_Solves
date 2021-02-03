#include <string>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    char str[110];
    int l,c=0;
    cin >> str;
    l= strlen(str);
    sort(str, str+l);
    for(int i=0; i<l; i++)
    {
        if(str[i] == str[i+1] )
        {
           c++;
        }

    }

  
l-=c;
if(l%2==0)
    cout<<"CHAT WITH HER!"<<endl;
else
    cout<<"IGNORE HIM!"<<endl;
    return 0;
}
