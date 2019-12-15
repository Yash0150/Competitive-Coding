#include<bits/stdc++.h>
using namespace std;

int subset(string s,string o,int i){
	if(i==s.size()){
		cout<<o<<" ";
		return 0;
	}

	subset(s,o,i+1);
	//o=o+s[j];
	subset(s,o+s[i],i+1);
	return 0;
}

int main(){
	string s,o="";
	cin>>s;
	subset(s,o,0);
	cout<<endl;
	cout<<(1<<s.size());
}