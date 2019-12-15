#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n;
    cin>>n;
    ll A[n];
    for(ll i=0; i<n; i++){
        cin>>A[i];
    }
    ll C[n]={0};
    ll B[n]={0};
    B[0]=A[0];
    for(ll i=1; i<n; i++){
        B[i]=A[i]+B[i-1];
    }
    ll ans=0;
    ll l=0,h=n-1,m=-1;
    for(ll i=1; i<=n; i++){
        C[i-1]=(i*(i+1))/2;
        m++;
        if(C[i-1]>=n){
            break;
        }
    }
    for(ll i=0; i<n; i++){
        l=i;
        if((h-l+1)<C[m]){
            m--;
            cout<<(h-l+1)<<" "<<C[m]<<endl;
        }
        //cout<<","<<l+m-1<<endl;
        if(i==0){
            ans=max(B[l+C[m]-1],ans);
            cout<<"."<<B[l+C[m]-1]<<" "<<ans<<endl;
        }
        else{
            ans=max(B[l+C[m]-1]-B[l-1],ans);
            cout<<"."<<B[l+C[m]-1]<<" "<<ans<<endl;
        }
    }
    cout<<ans;
}