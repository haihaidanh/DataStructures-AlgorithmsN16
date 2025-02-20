#include<bits/stdc++.h>
using namespace std;

int ucln(int a,int b){
	int x;
	while(b){
		x=a;
		a=b;
		b=x%b;		
	}
	return a;
}

int bcnn(int a,int b){
	return a/ucln(a,b)*b;
}
int main(){
	int t;cin>>t;
	while(t--){
		int x,y;cin>>x>>y;
		cout<<ucln(x,y)<<" "<<bcnn(x,y)<<endl;
	}
}
