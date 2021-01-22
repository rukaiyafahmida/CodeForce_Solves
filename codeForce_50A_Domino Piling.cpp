#include <string>
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main()
{
    int n,m;
    float x,o;
    cin >> m >> n;
    x= (n*m*1.0)/2.0;
    o= floor(x);
    cout << o << endl;
    return 0;
}

