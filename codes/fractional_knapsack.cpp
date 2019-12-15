#include<bits/stdc++.h>
using namespace std;
#define ll long long
void bubbleSort(vector<float> &v1,vector<float> &v2, int n) 
{ 
   int i, j; 
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
	int n;
	cin>>n;
	vector<float> v1,v2;
	for(int i=0; i<n; i++){
		int value,weight;
		cin>>value>>weight;
		v1.push_back(value/weight);
		v2.push_back(weight);
	}
	bubbleSort(v1,v2,n);
	int maxx;
	cin>>maxx;
	int sum=0;
	for(int i=n-1; i>=0; i--){
		if((maxx-v2[i])<=0){
			sum+=maxx*v1[i];
			break;
		}
		else{
			maxx=maxx-v2[i];
			sum+=v2[i]*v1[i];
		}
		//cout<<v2[i]<<" "<<v1[i]<<endl;
	}
	cout<<sum;
}