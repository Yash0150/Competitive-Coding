#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod 1000000007
#define pi pair<ll,ll>
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        ll n,q;
        cin>>n>>q;
        string s;
        cin>>s;
        bool a[n+1] = {0};
        for(int i=3;i<=n;i++){
            if((s[i-1]==s[i-2])||(s[i-1]==s[i-3])||(s[i-2]==s[i-3]))
            a[i] = 1;
        }
        int count[n+1] = {0};
        for(int i=1;i<=n;i++){
            count[i] = count[i-1]+a[i];
        }
        while(q--){
            int l,r;
            cin>>l>>r;
            if((r-l)+1 < 3)
	        {
	            cout<<"NO"<<endl;
	            continue;
	        }
            if(count[r]-count[l+1] > 0)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
    }
    return 0;
}