#include <string>
#include <iostream>
#include <queue>
#include <algorithm>
#include <cmath>
#include <array>
#include <cstring>
using namespace std;

int main()
{
    int n,x=1;
    cin >> n;
    int a[n],r[n],f=0;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];

    }
    for(int i=0;i<n-1;i++)
    {

        if(a[i]!=a[i+1])
        {
            x++;
        }
    }

    cout<< x <<endl;


    return 0;
}
