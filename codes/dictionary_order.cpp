#include<bits/stdc++.h>
using namespace std;
//set<string> ss;
vector<string> v;
bool comp(string s1,string s2){
	if(s1[0]<s2[0]){
		return true;
	}
	else if(s1[0]>s2[0]){
		return false;
	}
	else{
		if(s2>s1){
			return false;
		}
		else{
			return true;
		}
	}
}
int permute(string s,string o,int i){
	if(i==s.size()){
        if(o>s){
    		//ss.insert(s);
    		//cout<<s<<endl;
    		v.push_back(s);
	    	return 0;
	    }
    }

	for(int j=i; j<s.size(); j++){
		swap(s[i],s[j]);
		permute(s,o,i+1);
		swap(s[i],s[j]);
	}
	return 0;
}

int main(){
	string s,o;
	cin>>s;
    o=s;
	permute(s,o,0);
	//sort(v.begin(), v.end(), comp);
	for(int i=0; i<v.size(); i++){
		cout<<v[i]<<endl;
	}
	//set<string>:: iterator it;
	//for(it=ss.begin();it!=ss.end();it++){
	//	cout<<*it<<endl;
	//}
}