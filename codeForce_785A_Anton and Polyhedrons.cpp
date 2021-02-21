#include <string>
#include <cstring>
#include<stdlib.h>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    long int n,r=0;
    cin>>n;
    string x;
    for(long int i=0;i<n;i++)
    {
        cin>>x;
        if(x=="Tetrahedron")
            r+=4;
        else if(x=="Cube")
            r+=6;
        else if(x=="Octahedron")
            r+=8;
        else if(x=="Dodecahedron")
            r+=12;
        else if(x=="Icosahedron")
            r+=20;
    }
    cout<<r<<endl;
    return 0;
}
