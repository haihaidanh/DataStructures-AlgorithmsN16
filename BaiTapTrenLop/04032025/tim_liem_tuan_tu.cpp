#include<bits/stdc++.h>
using namespace std;

bool check(int a[],int n,int k){
	for(int i=0;i<n;i++){
		if(a[i]==k) return true;
	}
	return false;
}
int main(){
	int n,k;cin>>n>>k;
	int a[n];
	for(int &x : a) cin>>x;
	if(check(a,n,k)) cout<<"YES";
	else cout<<"NO";
}
