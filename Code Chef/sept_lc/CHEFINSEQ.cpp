#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll nCr(ll n, ll k) 
{ 
    ll C[n + 1][k + 1]; 
    ll i, j; 
    for (i = 0; i <= n; i++) 
    { 
        for (j = 0; j <= min(i, k); j++) 
        { 
            if (j == 0 || j == i) 
                C[i][j] = 1; 
            else
                C[i][j] = C[i - 1][j - 1] + 
                          C[i - 1][j]; 
        } 
    } 
  
    return C[n][k]; 
} 
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,k,b,j,l,m,cnt=1;
		cin>>n>>k;
		vector<ll>v;
		for(int i=0; i<n; i++){
			cin>>b;
			v.push_back(b);
		}
		sort(v.begin(),v.end());
		ll bst=0;
		if(k>n){
			cnt=0;
		}
		else if(k==0){
			cnt=0;
		}
		else{
			for(int i=0; i<n; i++){
				if(v[i]==v[k-1]){
					j=i;
					break;
				}
			}
			for(int i=j; i<n; i++){
				if(v[i]==v[k-1]){
					bst++;
				}
				else{
					break;
				}
			}
			//cout<<j<<" ";
			cnt=nCr(bst,k-j);
		}
		cout<<cnt<<endl;
	}
}