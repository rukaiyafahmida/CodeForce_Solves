#include<bits/stdc++.h>
#include <iostream>
#include <cctype>
#include <algorithm> 
//1692A - Marathon

using namespace std;
int main() {
    int t;
    cin >> t;
    for(int i =0; i<t; i++)
    {
        int a,b,c,d, count=0;
        cin >> a >> b>> c >> d;
        if(a<b){
            count++;}
        if(a<c){
            count++;}
        if(a<d){
            count++;}
        cout<< count <<endl;

    }
    return 0;
}
