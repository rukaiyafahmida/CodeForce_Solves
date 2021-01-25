#include <string>
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main()
{
    int n,x=0;
    cin >> n;
    string inst[n+5];
    for(int i=0; i<n; i++)
    {
        cin >> (inst[i]);
        if (inst[i].find("+") != string::npos)
        {
            x++;
        }
        else
        {
            x--;
        }
    }
    cout << x << endl;
    return 0;
}
