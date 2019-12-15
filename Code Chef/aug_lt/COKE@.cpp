#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,q,k,l,r,bst;
		cin>>n>>q>>k>>l>>r;
		int X[n],Y[n];
		for(int i=0; i<n; i++){
			//int a,b,d,m=j;
			cin>>X[i]>>Y[i];	
		}
		//j=1;
		if(k<l){
			int j;
			for(j=1; j<=q; j++){
				int b,m=j;
				vector<ll>v,p;
				for(int i=0; i<n; i++){
					if((X[i]-m)>=l && (X[i]-m)<=r){
						v.push_back(b);
					//cout<<b<<" ";
						p.push_back(Y[i]);
					}
					/*if(X[i]>k){
						b=X[i]-m;
						if(b<k+1){
							b=k;
						}
					}
					if(X[i]<k){
						b=X[i]+m;
						if(b>k-1){
							b=k;
						}
					}
					if(X[i]==k){
						b=k;
					}*/
					//v.push_back(b);
					//cout<<b<<" ";
					//p.push_back(Y[i]);
				}
				//cout<<endl;
				bst=INT_MAX;
				for(int i=0; i<v.size(); i++){
					bst=min(bst,p[i]);
				}
				//cout<<endl;
				if(bst==INT_MAX){
					bst=-1;
					//cout<<bst<<" ";
					break;
					//cout<<bst<<" ";
					//break;
				}////<<endl;
				cout<<bst<<" ";
			}	
			for(; j<=q; j++){
				cout<<-1<<" ";
			}	
			cout<<endl;
		}
		else if(k>r){
			int j;
			for(j=1; j<=q; j++){
				int b,m=j;
				vector<ll>v,p;
				for(int i=0; i<n; i++){
					if((X[i]+m)>=l && (X[i]+m)<=r){
						v.push_back(b);
					//cout<<b<<" ";
						p.push_back(Y[i]);
					}
					/*if(X[i]>k){
						b=X[i]-m;
						if(b<k+1){
							b=k;
						}
					}
					if(X[i]<k){
						b=X[i]+m;
						if(b>k-1){
							b=k;
						}
					}
					if(X[i]==k){
						b=k;
					}*/
					//v.push_back(b);
					//cout<<b<<" ";
					//p.push_back(Y[i]);
				}
				//cout<<endl;
				bst=INT_MAX;
				for(int i=0; i<v.size(); i++){
					bst=min(bst,p[i]);
				}
				//cout<<endl;
				if(bst==INT_MAX){
					bst=-1;
					//cout<<bst<<" ";
					break;
				}////<<endl;
				//cout<<bst<<" ";
			}	
			for(; j<=q; j++){
				cout<<-1<<" ";
			}	
			cout<<endl;
		}
		else{
			for(int j=1; j<=q; j++){
				int b,m=j;
				vector<ll>v,p;
				for(int i=0; i<n; i++){
					if((X[i])>=k && (X[i]-m)<=r){
						v.push_back(b);
					//cout<<b<<" ";
						p.push_back(Y[i]);
					}
					if((X[i])<=k && (X[i]+m)>=l){
						v.push_back(b);
					//cout<<b<<" ";//
						p.push_back(Y[i]);
					}
					/*if(X[i]>k){
						b=X[i]-m;
						if(b<k+1){
							b=k;
						}
					}
					if(X[i]<k){
						b=X[i]+m;
						if(b>k-1){
							b=k;
						}
					}
					if(X[i]==k){
						b=k;
					}*/
					//v.push_back(b);
					//cout<<b<<" ";
					//p.push_back(Y[i]);
				}
				//cout<<endl;
				bst=INT_MAX;
				for(int i=0; i<v.size(); i++){
					bst=min(bst,p[i]);
				}
				//cout<<endl;
				if(bst==INT_MAX){
					bst=-1;
					//cout<<bst<<" ";
					//break;
				}////<<endl;
				cout<<bst<<" ";
			}		
			cout<<endl;
		}
	}
}