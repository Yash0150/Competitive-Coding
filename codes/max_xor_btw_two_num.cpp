#include <bits/stdc++.h>
using namespace std;
int main() {
    int x,y;
    cin>>x>>y;
    int num = x^y;
    int msb=0;
    while(num!=0) {
        num=num>>1;
        msb++;
    }
    cout<<msb;
}
