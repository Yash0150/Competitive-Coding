#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll bs(ll p,ll l,ll h,ll c){
	ll mid,ans=-1;
	while(l<=h && l>=1 && h>=1){
		mid=(l+h)/2;
		if(((p/mid)+2)<=c){
			ans=mid;
			h=mid-1;
		}
		else{
			l=mid+1;
		}
	}
	return ans;
}

int main(){
	ll t,ans;
	cin>>t;
	while(t--){
		ll a,b,c,z,p,q,r,s,ans=0;
		cin>>a>>b>>c;
		ll x=sqrt(a*c);
		ll y=min(b,x);
		for(ll i=1; i<=y; i++){
			z=i*i;
			p=bs(z,1,a-1,c);
			if(p==-1){
				continue;
			}
			for(ll j=p; j<=a-1; j++){
				ans+=c-((z/j)+2)+1;
				//cout<<ans<<" ";
			}
			//cout<<endl;
			/*cout<<p<<" ";
			q=c-((z/p)+2);
			r=c-((z/(a-1))+2)+1;
			cout<<q<<" "<<r<<" ";
			s=((r)*(r+1))/2 -((q)*(q+1))/2;
			cout<<s<<endl;*/
			//ans+=s;
		}
		cout<<ans<<endl;
	}
}