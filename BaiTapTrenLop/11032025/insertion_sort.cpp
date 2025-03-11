#include<bits/stdc++.h>
using namespace std;

//bool check(int a[],int n,int k){
//	for(int i=0;i<n;i++){
//		if(k == a[i]) return true;
//	}
//	return false;
//}

void search(int a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[j]==a[i]){
				cout<<a[i]<<endl;
				return;
			}
		}
	}
	cout<<"NO"<<endl;
}

int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
	int a[n];
	for(int &x : a) cin>>x;
	search(a,n);
	}
	
}
