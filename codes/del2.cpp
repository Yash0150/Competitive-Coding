#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long


int main() {
    ll m;
    cin>>m;
    while(m--){
        ll n;
        cin>>n;
        if(n&1){
            ll w,x,y,z;
            w=(n+1)/2;
            z=n/2;
            x=pow(w,2);
            y=pow(z,2)+z;
            cout<<x<<" "<<y;
            if(x>y){
                cout<<" "<<"Dipak";
            }
            else{
                cout<<" "<<"Bhaskar";
            }
        }
        else{
            ll w,x,y;
            w=n/2;
            x=pow(w,2);
            y=pow(w,2)+w;
            cout<<x<<" "<<y;
            if(x>y){
                cout<<" "<<"Dipak";
            }
            else{
                cout<<" "<<"Bhaskar";
            }
        }
	cout<<endl;
        
    }
    
}

