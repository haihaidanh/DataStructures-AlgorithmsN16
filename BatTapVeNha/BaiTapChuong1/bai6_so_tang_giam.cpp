#include<bits/stdc++.h>
using namespace std;
void check(string s){
	int tang=1,giam=1;
	for(int i=1;i<s.length();i++){
		if((s[i]-'0'<s[i-1]-'0')){
			tang=0;
		}
		else giam=0;
		
	}
	if(!tang&&!giam) cout<<"NO"
	cout<<"YES"<<endl;
	
}
int main(){
	int t;cin>>t;
	cin.ignore();
	while(t--){
		string s;getline(cin,s);
		check(s);
		
	}
}
