#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string str,st;
    cin >> str;
    char arr[52],x=0;
    int l = str.length();
    int len2;
    for(int i=0;i<l;i++)
    {
        if(str[i] == '1' || str[i] == '2' || str[i] == '3' )
        {
            arr[x]=str[i];
            x++;
        }
    }
    sort(arr,arr+x);
    for(int i=0; i<x; i++)
    {

            st.push_back(arr[i]);
            if(i<x-1)
            st.push_back('+');


    }
    cout << st <<endl;

    return 0;
}
