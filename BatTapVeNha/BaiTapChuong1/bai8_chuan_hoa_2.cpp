#include<bits/stdc++.h>
using namespace std;

string chuanhoa2(string s){
	string a="";
	for(int i=0;i<s.length();i++){
		a+=toupper(s[i]);
	}
	return a;
}
void chuanhoa(string s){
	vector<string> v;
	stringstream ss(s);
	string w;
	while(ss>>w){
		w[0]=toupper(w[0]);
		for(int i=1;i<w.size();i++){
			w[i]=tolower(w[i]);
		}
		v.push_back(w);
	}
	for(int i=1;i<=v.size()-1;i++){
		cout<<v[i];
		if(i<v.size()-1) cout<<" ";
	}
	cout<<", ";
	cout<<chuanhoa2(v[0])<<endl;
	
	
}
int main(){
	int t;cin>>t;
	cin.ignore();
	while(t--){
		string s;getline(cin,s);
		chuanhoa(s);
		
	}


}
