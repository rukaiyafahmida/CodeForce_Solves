#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    int l,c=0;
    cin>> l;
    cin >> str;
    for(int i=0; i<l; i++)
    {
        if(str[i] == str[i+1] )
        {
           c++;
        }

    }

  
cout<<c<<endl;
    return 0;
}
