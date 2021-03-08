#include <string>
#include <cstring>
#include<stdlib.h>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int main()
{
    int n,m,check = 0;
    cin>>n>>m;
    char box[n][m];
    for(int i=0;i<n;i++)
    {
        memset(box[i], '#', m);
    }
    for(int i=1;i<n;i+=2)
    {
        if(check==0)
        {
            for(int j=0;j<m-1;j++)
            {
                box[i][j]='.';
                check=1;
            }

        }
        else
        {
            for(int j=1;j<m;j++)
            {
                box[i][j]='.';
                check=0;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<box[i][j];
        }
        cout<<endl;
    }

    return 0;
}
