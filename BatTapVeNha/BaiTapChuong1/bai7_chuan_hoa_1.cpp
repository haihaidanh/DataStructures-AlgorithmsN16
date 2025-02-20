#include<bits/stdc++.h>
using namespace std;
string chuanhoa(string s){
	string a="";
	stringstream ss(s);
	string w;
	while(ss>>w){
		a+=toupper(w[0]);
		for(int i=1;i<w.length();i++){
			a+=tolower(w[i]);
		}
		a+=" ";
	}
	return a;
	
}
int main(){
	int t;cin>>t;
	cin.ignore();
	while(t--){
		string s;getline(cin,s);
		cout<<chuanhoa(s)<<endl;
		
	}
}
