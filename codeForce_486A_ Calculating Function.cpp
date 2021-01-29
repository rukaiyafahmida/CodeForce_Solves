#include <string>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    long long int n,r,ce,x;
    cin >> n;
    ce=ceil(n*1.0/2.0);
    x=n-ce;
    r=-ce*ce;
    r+=x*(x+1);
    cout <<r<<endl;
    return 0;
}
