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

int main(){
	int n;cin>>n;
	int a[n];
	for(int &x : a) cin>>x;
	sort(a,n);
	for(int x : a){
		cout<<x<<" ";
	}
}
