#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string str,st;
    cin >> str;
    cin >> st;
    int v1;
    for_each(str.begin(), str.end(), [](char & c)
    {
        c = ::tolower(c);


    });
    for_each(st.begin(), st.end(), [](char & d)
    {
        d = ::tolower(d);

    });

    v1=str.compare(st);
    if( v1 ==0)

        cout << "0" <<endl;
    else if(v1>0)

        cout << "1" <<endl;
    else

        cout << "-1" <<endl;

    return 0;
}
