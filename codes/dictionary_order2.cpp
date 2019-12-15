#include<bits/stdc++.h>
using namespace std;

void rec(string s, int i, int n){
	if(i==n){
		cout<<s<<endl;
		return;
	}
	for(int j=i; j<s.size(); j++){
		swap(s[i],s[j]);
		rec(s,i+1,n);
		swap(s[i],s[j]);
	}
	return;
}

int main(){
	string s="cab";
	//cin>>s;
	int n=s.size();
	string a=s;
	for(int i=1; i<n; i++){
		swap(s[i],s[0]);
		if(s<a){
			rec(s,1,n);
		}
		//swap(s[i],s[0]);
	}
}
