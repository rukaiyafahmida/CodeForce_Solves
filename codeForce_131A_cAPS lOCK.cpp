#include <string>
#include <cctype>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int v=0;
    char f= str[0],c;

    for(int i=1; i<str.length(); i++)
    {
        c=str[i];
        if(isupper(c))
        {
            v=0;
        }
        else
        {
            v=1;
            break;
        }
    }
    //v will be 1 is there is a lowercase from the second letter till end

    int length = str.length();
    if(v ==0 )
    {
        for (int i = 0; i < length; i++)
        {
            int c = str[i];
            if (islower(c))
                str[i] = toupper(c);
            else if (isupper(c))
                str[i] = tolower(c);
        }
    }

    cout << str <<endl;

    return 0;
}
