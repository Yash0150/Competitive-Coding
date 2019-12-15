#include<bits/stdc++.h>
using namespace std;
#define ll long long                   //NOTE WE CAN ALSO MAKE AN ARRAY WITH MIN COST PER LITER AND THEN MULTIPLY IT 
									   //WITH OTHER ARRAY CONTAINING DISTANCE.
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> v1;
		for(int i=0; i<n; i++){
			int a;
			cin>>a;
			v1.push_back(a);
		}
		vector<int> v2;
		for(int i=0; i<n; i++){
			int a;
			cin>>a;
			v2.push_back(a);
		}
		int min=v1[0];
		int sum=0;
		for(int i=0; i<n; i++){
			if(min>v1[i]){
				min=v1[i];
				sum+=min*(v2[i]);
			}
			else{
				sum+=min*(v2[i]);
			}
		}
		cout<<sum<<endl;
	}
}