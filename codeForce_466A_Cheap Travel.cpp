#include<bits/stdc++.h>
#include <string>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <utility>
#include <cstdlib>

using namespace std;


int main() {

    int n, m, a, b;

    cin >>n>>m>>a>>b;
    if (m * a <= b)
        cout <<n * a<< endl;
    else
        cout<<(n/m)*b + min((n%m)* a, b)<<endl;   //after buying as much as m ride tickets possible,
                                                 //checking if buying the remaining tickets singly will be better
                                                //or with the package. Does not matter if there are extra tickets
    return 0;
}

