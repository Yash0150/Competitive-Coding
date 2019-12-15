#include<bits/stdc++.h>
using namespace std;
priority_queue<int, vector<int>, greater<int>> pq;
int x=0,y=0,z=0;
int A[100000]={0};
int sort1(vector<vector<int>> v,int i,int n,int m){
	if(i==n*m){
		for(int j=0;pq.size()!=0;j++){
			int k = pq.top();
			cout<<k<<" ";
			pq.pop();
		}
		return 0;
	}
	if(pq.size()<n){
		pq.push(v[i][0]);
		sort1(v,i+1,n,m);
	}
	else{
		int k=pq.top();
		cout<<k<<" ";
		int j;
		for(j=0; j<n; j++){
			if(v[j][A[j]]==pq.top()){
				break;
			}
		}
		//A[j]++;
		pq.pop();
		pq.push(v[j][A[j]]);
		A[j]++;
		sort1(v,i+1,n,m);
	}
	return 0; 
}
int main(){
	int n,m;
	cin>>n>>m;
	vector<vector<int>> v(n,vector<int> (m));
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>v[i][j];
		}
	}
	sort1(v,0,n,m);
	//int k=0,l=0;
	/*for(int i=0; i<n; i++){
		if(pq.size()<n){
		pq.push(v[i][0])
	}
	else{
		int k=pq.top();
		cout<<k<<" ";
		for(int j=0;j<n;j++){
			if(v[i])
		}
		pq.push()
		}
	} */
}