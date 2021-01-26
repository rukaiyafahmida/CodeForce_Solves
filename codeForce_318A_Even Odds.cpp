#include <string>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    long long int n,k,r,ce;
    cin >> n>>k;
    ce=ceil(n*1.0/2.0);
    if(k<=ce) //find odd number
    {
        r=2*k-1;
    }
    else
        r=2*(k-ce);
    cout <<r<<endl;
    return 0;
}
