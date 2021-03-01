#include <string>
#include <cstring>
#include<stdlib.h>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int n,m,x;
    cin>>n>>m;

    if(m<n)
        x=m;
    else
        x=n;
    if(x%2==0)
        cout<<"Malvika"<<endl;
    else
        cout<<"Akshat"<<endl;



    return 0;
}
