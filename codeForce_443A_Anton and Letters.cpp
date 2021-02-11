#include <string>
#include <cstring>
#include<stdlib.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string a,b="";
    int i=0,c=0;
    getline(cin, a); //takes in inputs with white spaces

    while(a[i]!='}')
    {
        char x = a[i];
        if(x>= 'a' && x<= 'z' && b.find(x)==std::string::npos)
            {
                c++;
                b.push_back(x);
            }
        i++;
    }
    cout<<c<<endl;
    return 0;
}
