#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
	int n;
	cin>>n;
	vector<pair<int,int>> v1,v2;
	for(int i=0; i<n; i++){
		int a,b;
		cin>>a>>b;
		v1.push_back(make_pair(a,b));
		v2.push_back(make_pair(b,a));
	}
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());
	vector<pair<int,int>>::iterator it;
	int max1=INT_MIN;
	int max2=INT_MIN;
	for(it=v1.begin(); it!=v1.begin()+n-1; it++){
		int x1=it->first;
		//int y1=it->second;
		int x2=(it+1)->first;
		//int y2=(it+1)->second;
		//int z=y2-y1;
		//z=(z>0)?z:(-z);
		max1=(max1>(x2-x1-1)?max1:(x2-x1-1));
		//max2=(max2>z)?max2:z;
		//cout<<max1<<max2-1<<endl;
	}
	for(it=v2.begin(); it!=v2.begin()+n-1; it++){
		int x1=it->first;
		//int y1=it->second;
		int x2=(it+1)->first;
		//int y2=(it+1)->second;
		//int z=y2-y1;
		//z=(z>0)?z:(-z);
		max2=(max2>(x2-x1-1)?max2:(x2-x1-1));
		//max2=(max2>z)?max2:z;
		//cout<<max1<<max2-1<<endl;
	}
	cout<<max1*(max2);
}