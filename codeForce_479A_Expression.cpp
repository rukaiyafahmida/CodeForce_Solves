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
    int a[3],r[6];
    for(int i=0;i<3;i++)
    {
        cin >> a[i];

    }
    r[0]=a[0] * a[1] * a[2];
    r[1]=(a[0] + a[1]) * a[2];
    r[2]=a[0] * (a[1] + a[2]);
    r[3]=a[0] * a[1] + a[2];
    r[4]=a[0] + a[1] * a[2];
    r[5]=a[0] + a[1] + a[2];
    sort(r, r + 6, greater<int>());

    cout<< r[0] <<endl;


    return 0;
}
