#include <bits/stdc++.h>
using namespace std;
int main() {
    string a;
    char c;
    int maxx=INT_MIN;
    cin>>a;
    while(a.size()){
        int m=count(a.begin(),a.end(),a[0]);
        if(m>maxx){
            maxx=m;
            c=a[0];
        }
        //cout<<a[0]<<" ";
        char s=a[0];
        a.erase(remove(a.begin(),a.end(),s),a.end());
        //cout<<a;
    }
    cout<<c;

}
