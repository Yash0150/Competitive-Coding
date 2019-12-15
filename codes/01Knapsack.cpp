#include<bits/stdc++.h>
using namespace std;
#define ll long long
void bubbleSort(vector<float> &v1,vector<float> &v2, ll n) 
{ 
   ll i, j; 
   for (i = 0; i < n-1; i++){        
       for (j = 0; j < n-i-1; j++){  
           if (v1[j] > v1[j+1]){ 
              swap(v1[j], v1[j+1]);
              swap(v2[j], v2[j+1]);
            }
        }
    } 
} 

int main(){
	ll n;
	cin>>n;
	ll maxx;
	cin>>maxx;
	vector<float> v1,v2;
	for(ll i=0; i<n; i++){
		ll weight;
		cin>>weight;
		v2.push_back(weight);
	}
	for(ll i=0; i<n; i++){
		ll value;
		cin>>value;
		v1.push_back(value/v2[i]);
	}
	bubbleSort(v1,v2,n);
	ll sum=0;
	for(ll i=n-1; i>=0; i--){
		if((maxx-v2[i])<0){
			//continue;
		}
		else if((maxx-v2[i])==0){
			maxx=maxx-v2[i];
			sum+=v2[i]*v1[i];
			//break;
		}
		else{
			maxx=maxx-v2[i];
			sum+=v2[i]*v1[i];
		}
		//cout<<v2[i]<<" "<<v1[i]<<endl;
	}
	cout<<sum;
}