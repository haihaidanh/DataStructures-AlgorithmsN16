#include<bits/stdc++.h>
using namespace std;

void check(int a[],int n){
	int l=0,r=n-1;
	while(l<r){
		if(a[l]!=a[r]){
			cout<<"NO"<<endl;
			return;
		}
		l++;r--;
	}
	cout<<"YES"<<endl;
}
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n];
		for(int &x : a) cin>>x;
		check(a,n);
	}
}

