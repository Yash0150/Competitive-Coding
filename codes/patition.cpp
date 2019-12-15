#include<bits/stdc++.h>
using namespace std;

/*int swap(int *x, int *y){
	int t=*x;
	*x=*y;
	*y=t;
}

int partition(vector <int> &v, int n){
	int pivot=v[n-1];
	int i=-1;
	for(int j=0; j<=n-2; j++){
		if(v[j]<=pivot){
			i++;
			swap(v[j],v[i]);
		}
	}
	swap(v[i+1],v[n-1]);
	return i+1;
}
*/
int inc(vector <int> v, int n){
	for(int i=0; i<n; i++){
		if(count(v.begin(),v.end(),v[i])>2){
			return false;
		}
		
	}
	return true;
}

int main(void){
	int n;
	cin>>n;
	vector <int> v;
	for(int i=0; i<n; i++){
		int a;
		cin>>a;
		v.push_back(a);
	}
	if(inc(v,n)){
		cout<<"true";
	}
	else{
		cout<<"false";
	}
}
		
