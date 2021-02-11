#include <string>
#include <cstring>
#include<stdlib.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>> n;
    int ar[n],even=0,odd=0,x,y;
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
        if(ar[i]%2==0) //even
        {
            even++;
            x=i;
        }
        else
        {
            odd++;
            y=i;
        }
    }
    if(even>odd) //odd is different
    {
        cout<<y+1<<endl;
    }
    else
    {
        cout<<x+1<<endl;
    }
    return 0;
}
