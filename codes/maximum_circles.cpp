/*#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n;
	cin>>n;
	vector<ll> v1,v2;
	for(ll i=0; i<n; i++){
		ll a,b;
		cin>>a>>b;
		v1.push_back(a);
		v2.push_back(b);
	}
	ll sum=0;
	for(ll i=0; i<n-1; i++){
		ll a=(v1[i+1]-v1[i]);
		ll b=(v2[i+1]+v2[i]);
		//ll c=(v1[i+1]-v1[i]);
		ll d=(v2[i+1]-v2[i]);
		a=(a>0)?a:(-a);
		d=(d>0)?d:(-d);
		if(d>=a){
			continue;		
		}
		else if(a<b){
			cout<<v1[i+1]<<endl;
			v1.erase(v1.begin()+i);
			v2.erase(v2.begin()+i);
			n--;
			sum++;
		}
	}
	cout<<sum;
}*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int pair_sort(vector<int> &v1,vector <int> &v2,int n){
	vector<pair<int,int>> v(n);
	for(int i=0; i<n; i++){
		v[i]=make_pair(v2[i],v1[i]);
	}
	sort(v.begin(), v.end());
	vector<pair<int,int>>::iterator it;
	int i=0;
	for(it=v.begin();it!=v.end();it++){
		v1[i]=it->second;
		v2[i]=it->first;
		i++;
	}
}

int main(){
	int n;
	cin>>n;
	vector<int> start,end;
	for(ll i=0; i<n; i++){
		ll a,b;
		cin>>a>>b;
		start.push_back(a-b);
		end.push_back(a+b);
	}
	pair_sort(start,end,n);

	int num_of_activity=1;
	int j=0;
	for(int i=0;i<n-1; i++){
		if(start[i+1]>=end[j]){
			num_of_activity++;
			j=i+1;
		}
	}
	cout<<(n-num_of_activity);

	/*for(int i=0; i<n; i++){
		cout<<start[i]<<" "<<end[i]<<endl;
	}*/
}