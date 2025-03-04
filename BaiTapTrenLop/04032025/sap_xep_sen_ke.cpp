#include<bits/stdc++.h>
using namespace std;


void sort(int a[],int n){
	for(int i=0;i<n-1;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[min]) min=j;
		}
		swap(a[min],a[i]);
	}
}

void so(int a[],int n){
	sort(a,n);
	int l=0,r=n-1;
	while(l<r){
		cout<<a[r]<<" "<<a[l]<<" ";
		l++,r--;
	}
	if(n%2==1) cout<<a[l];
}
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n];
		for(int &x : a) cin>>x;
		so(a,n);cout<<endl;
	}
	



}
