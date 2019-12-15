#include<bits/stdc++.h>
using namespace std;
#define ll long long

int kedane(vector<int> v,int n){
	//vector<int> v1;
	int max=INT_MIN;
	int sum=0;
	for(int i=0; i<n; i++){
		sum+=v[i];
		if(sum>max){
			max=sum;
		}
		if(sum<0){
			//v1.push_back(0);
            sum=0;
		}
		else{
			//v1.push_back(sum);
		}
	}
	return max;
}
int kedanec(vector<int> v,int n,int sum1){
	int max=INT_MIN;
	for(int i=0; i<n; i++){
		v[i]=-v[i];
	}
	int sum=0;
	for(int i=0; i<n; i++){
		sum+=v[i];
		if(sum>max){
			max=sum;
		}
		if(sum<0){
			//v1.push_back(0);
            sum=0;
		}
		else{
			//v1.push_back(sum);
		}
	}
	return (sum1+max);
}


int main(void){
	int m;
	cin>>m;
	while(m){
		int n;
		cin>>n;
		vector <int> v;
		int sum=0;
		for(int i=0; i<n; i++){
			int a;
			cin>>a;
			sum+=a;
			v.push_back(a);
		}
		int x=kedane(v,n);
		int y=kedanec(v,n,sum);

		(x>y) ? cout<<x<<endl : cout<<y<<endl;
		m--;
	}

}	