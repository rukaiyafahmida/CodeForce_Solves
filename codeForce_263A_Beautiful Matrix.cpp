#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
int c=0,x=0,h,w,map[8][8];
for(int i=0; i<5; i++)
{
    for (int j=0; j<5; j++)
    {
       cin>>map[i][j];
       if (map[i][j]== 1)
       {
           h=i;
           w=j;
       }
    }
}
c=abs(h-2)+abs(w-2);
cout<<c<<endl;
    return 0;
}
