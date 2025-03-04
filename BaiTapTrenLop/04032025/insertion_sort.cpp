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

//void bubble_sort(int a[],int n){
//	for(int i=0;i<n;i++){
//		for(int j=i+1;j<n;j++){
//			if(a[j]<a[i]) swap(a[i],a[j]);
//		}
//	}
//}
//
//void selection_sort(int a[],int n){
//	for(int i=0;i<n-1;i++){
//		int min=i;
//		for(int j=i+1;j<n;j++){
//			if(a[j]<a[min]) min=j;
//		}
//		swap(a[min],a[i]);
//	}
//}
//
//void so(int a[],int n){
//	selection_sort(a,n);
//	int l=0,r=n-1;
//	while(l<r){
//		cout<<a[r]<<" "<<a[l]<<" ";
//		l++,r--;
//	}
//	if(n%2==1) cout<<a[l];
//}
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
