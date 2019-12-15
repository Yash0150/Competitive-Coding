#include<bits/stdc++.h>
using namespace std;

int subset(string s){
	for(int i=0; i<pow(2,s.size()); i++){
		for(int j=0;j<s.size();j++){
			if(i&(1<<j)){
				cout<<s[j];
			}
		}
		cout<<endl;
	}
}

int main(){
	string s;
	cin>>s;
	subset(s);
}