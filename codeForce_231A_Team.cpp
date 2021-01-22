#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,c=0,x,y,z;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> x >> y >> z;
        if((x+y+z) >=2)
        {
            c++;
        }
    }
    cout << c << endl;
    return 0;
}
