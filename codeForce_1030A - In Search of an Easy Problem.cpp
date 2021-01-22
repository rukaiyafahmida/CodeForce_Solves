#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,x=0;
    cin >> n;
    int a[n];
    for(int i =0;i<n;i++)
    {
        cin>> a[n];
        x+=a[n];
    }
    if(x==0)
        cout << "EASY" <<endl;
    else
        cout << "HARD" <<endl;

    return 0;
}
