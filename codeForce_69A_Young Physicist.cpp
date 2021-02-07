#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,a=0,b=0,c=0;
    cin>> n;
    int arr;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin >> arr;
            if(j==0)
            {
                a+=arr;
            }
            else if(j==0)
            {
                b+=arr;
            }
            else
            {
                c+=arr;
            }
        }
    }
    if(a==0 && b==0 && c==0)


        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}
