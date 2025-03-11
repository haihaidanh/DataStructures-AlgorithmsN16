#include<bits/stdc++.h>
using namespace std;

//bool check(int a[],int n,int k){
//	for(int i=0;i<n;i++){
//		if(k == a[i]) return true;
//	}
//	return false;
//}

int binary_search(int a[],int l,int r,int k){
	
	while(l<r){
		int m = (l+r)/2;
		if(k == a[m]) return true;
		else if(k>a[m]){
			l=m+1;
		}else{
			r=m-1;
		}
	}
	return false;
}

int main(){
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		int a[n];for(int &x : a) cin>>x;
		sort(a,a+n);
		if(binary_search(a,0,n-1,k)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	
}
