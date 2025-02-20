#include<bits/stdc++.h>
using namespace std;

void check(int n){
	int t = n%10;
	while(n>9){
		n/=10;
	}
	if(n!=t) cout<<"NO"<<endl;
	else cout<<"YES"<<endl;
}

int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		check(n);
	}
}
