
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long int n,m,a,x,y,z;
    cin >> n >> m >> a;
    if(n>m)
    {
    x= ceil(n*1.0/a);
    y= ceil(m*1.0/a)-1;
    }
    else
    {

    x= ceil(m*1.0/a);
    y= ceil(n*1.0/a)-1;

    }
    cout << (x+x*y);
    printf("\n");
    return 0;
}
