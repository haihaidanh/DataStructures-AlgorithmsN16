#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int a[],int n){
	for(int i=1;i<n;i++){
		int x=a[i],p=i-1;
		while(p>-1&&a[p]>x){
			
			a[p+1]=a[p];p--;
		}
		a[p+1]=x;
	}
	
}


int main(){
	int t=1;
	while(t--){
		int n;cin>>n;
		int a[n];
		for(int &x : a) cin>>x;
		insertion_sort(a,n);
		for(int x : a) cout<<x<<" ";
	}
	



}
