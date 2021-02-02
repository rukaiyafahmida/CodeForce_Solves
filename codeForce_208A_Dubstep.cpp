#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string x;
    int check=1;
    cin>>x;

    for(int i=0;i<x.length();i++)
    {
        if(x[i]=='W' &&  x[i+1]=='U' && x[i+2]=='B')
        {
            i+=2;
            if(check==0)
                cout<<" ";
            continue;
        }
        else
        {
            check=0;
            cout<<x[i];
        }
    }

    return 0;
}
