#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int c=1;
    int l = str.length();
    for(int i=0; i<l; i++)
    {
        if(str[i] == str[i+1] )
        {
            if(c<=7)
            {
                c++;
            }
            else
            {
                break;
            }
        }
        else if(c<7)
        {
            c=1;
        }
    }

    if(c>=7)
        cout<< "YES" <<endl;
    else
        cout<< "NO" <<endl;

    return 0;
}
