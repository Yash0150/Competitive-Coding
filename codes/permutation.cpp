#include<bits/stdc++.h>
using namespace std;
set<string> ss;
int permute(string s,int i){
	if(i==s.size()){
		ss.insert(s);
		return 0;
	}

	for(int j=i; j<s.size(); j++){
		swap(s[i],s[j]);
		permute(s,i+1);
		swap(s[i],s[j]);
	}
	return 0;
}

int main(){
	string s="abc";
	//cin>>s;
	permute(s,0);
	set<string>:: iterator it;
	for(it=ss.begin();it!=ss.end();it++){
		cout<<*it<<endl;
	}
}