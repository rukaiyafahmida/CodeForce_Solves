
#include <iostream>
using namespace std;

int main()
{
    int n,k,x,c,p=0;
    cin >> n >> k;
    int s[n];
    for(int i=0; i<n; i++)
    {
        cin >> s[i];
        if(s[i]>=1)
        {
            p++;
        }
        else
            break;
    }
    if(p<k)
        cout << p << endl;


    else if(s[0]<1)
        printf("0\n");

    else
    {
        x=s[k-1];
        c=k;
        for(int j=k; j<n; j++)
        {
            if(s[j]==x)
            {
                c++;
            }

            else
            {
                break;

            }
        }

        cout << c<< endl;
    }

    return 0;
}
