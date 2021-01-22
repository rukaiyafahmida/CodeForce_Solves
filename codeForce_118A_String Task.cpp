#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string str,st;
    cin >> str;
    int l = str.length();
    int len2;
    for_each(str.begin(), str.end(), [](char & c)
    {
        c = ::tolower(c);
    });

    for(int i=0; i<l; i++)
    {
        if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u' && str[i]!='y')
        {
            st.push_back('.');

            st.push_back(str[i]);

        }
    }
    cout << st <<endl;

    return 0;
}
