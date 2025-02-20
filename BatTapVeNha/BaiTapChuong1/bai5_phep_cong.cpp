#include<bits/stdc++.h>
using namespace std;
void check(string s){
	int a=s[0]-'0';
	int b=s[4]-'0';
	int c=s[8]-'0';
	if(a+b==c) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}
int main(){
	int t;cin>>t;
	cin.ignore();
	while(t--){
		string s;getline(cin,s);
		check(s);
		
	}
}
