#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll dp[8][8];

ll sol(ll i,ll j, ll c, ll d){
	if(i==c && j==d){
		return 0;
	}
	if((i+2)<8 && (j+1)<8){
		if(dp[i+2][j+1]==-1){
			dp[i+2][j+1]=dp[i][j]+(((i)*(i+2))+((j)*(j+1)));
		}
		else{
			dp[i+2][j+1]=min(dp[i][j]+(((i)*(i+2))+((j)*(j+1))),dp[i+2][j+1]);
		}
		sol(i+2,j+1,c,d);
		dp[i+2][j+1]=-1;
	}
	if((i+1)<8 && (j+2)<8){
		if(dp[i+1][j+2]==-1){
			dp[i+1][j+2]=dp[i][j]+(((i)*(i+1))+((j)*(j+2)));
		}
		else{
			dp[i+1][j+2]=min(dp[i][j]+(((i)*(i+1))+((j)*(j+2))),dp[i+1][j+2]);
		}
		sol(i+1,j+2,c,d);
		dp[i+1][j+2]=-1;
	}
	if((i+2)<8 && (j-1)>=0){
		dp[i+2][j-1]=dp[i][j]+(((i)*(i+2))+((j)*(j-1)));
		sol(i+2,j-1,c,d);
		dp[i+2][j-1]=-1;
	}
	if((i+1)<8 && (j-2)>=0){
		dp[i+1][j-2]=dp[i][j]+(((i)*(i+1))+((j)*(j-2)));
		sol(i+1,j-2,c,d);
		dp[i+1][j-2]=-1;
	}
	if((i-2)>=0 && (j+1)<8){
		dp[i-2][j+1]=dp[i][j]+(((i)*(i-2))+((j)*(j+1)));
		sol(i-2,j+1,c,d);
		dp[i-2][j+1]=-1;
	}
	if((i-1)>=0 && (j+2)<8){
		dp[i-1][j+2]=dp[i][j]+(((i)*(i-1))+((j)*(j+2)));
		sol(i-1,j+2,c,d);
		dp[i-1][j+2]=-1;
	}
	if((i-2)>=0 && (j-1)>=0){
		dp[i-2][j-1]=dp[i][j]+(((i)*(i-2))+((j)*(j-1)));
		sol(i-2,j-1,c,d);
		dp[i-2][j-1]=-1;
	}
	if((i-1)>=0 && (j-2)>=0){
		dp[i-1][j-2]=dp[i][j]+(((i)*(i-1))+((j)*(j-2)));
		sol(i-1,j-2,c,d);
		dp[i-1][j-2]=-1;
	}
	return 0;
}

int main(){
	ll n;
	cin>>n;
	while(n--){
		ll a,b,c,d;
		cin>>a>>b>>c>>d;
		memset(dp,-1,sizeof(dp));
		dp[a][b]=0;
		cout<<sol(a,b,c,d)<<endl;
	}
}