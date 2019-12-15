#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int ans=0;
		unordered_map<string,int>m;
		for(int i=0; i<s.size(); i++){
			string c="";
			int a=0,b=0;
			for(int j=i; j<s.size(); j++){

				if(m.count(c+s[j])==0){
					c=c+s[j];
					cout<<c<<" ";
					m.insert(make_pair(c,1));
					if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u' || s[j]=='A' || s[j]=='E' || s[j]=='I' || s[j]=='O' || s[j]=='U'){
						a++;
					}
					//else{
						b+=a;
					//}

				}
			}
			ans+=b;
		}
		cout<<ans<<endl;
	}
}