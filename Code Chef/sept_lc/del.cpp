#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
 	deque<ll>v;
 	ll n,a,k,x;
 	unordered_map<ll,ll>m;
 	cin>>n>>k;
 	ll A[n]={0};
 	for(ll i=0; i<n; i++){
 		cin>>A[i];
 	}
 	for(ll i=n-1; i>=0; i--){
 		if(v.size()<k && m[A[i]]==0){
 			v.push_back(A[i]);
 			m[A[i]]=1;
 		}
 		else if(v.size()==k){
			if(i!=0){
				if(v.size()<k && m[A[i]]==0){
 					v.push_back(A[i]);
 					v.pop_front();
 					m[A[i]]=1;
 				}
			}
			break; 
 		}
 	}
 	cout<<v.size()<<endl;
 	for(ll i=0; i<v.size(); i++){
 		cout<<v[i]<<" ";
 		//v.pop_front();
 	}
 }