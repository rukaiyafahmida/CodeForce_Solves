#include <string>
#include <cstring>
#include<stdlib.h>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    long int n;
    cin>>n;
    int c=0,q;
    q = n / 100;
    c=q;
    n = n % 100;

    q = n / 20;
    c+=q;
    n = n % 20;

    q = n / 10;
    c+=q;
    n = n % 10;

    q = n / 5;
    c+=q;
    n = n % 5;

    c+=n;

    cout<<c<<endl;
    return 0;
}
