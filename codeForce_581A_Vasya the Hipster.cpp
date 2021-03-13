#include<bits/stdc++.h>
#include <string>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
 int a,b;
 cin>>a>>b;
 int x,y;
 x=min(a,b);
 y=floor((max(a,b)-x)/2);
 cout<<x<<" "<<y<<endl;

}
