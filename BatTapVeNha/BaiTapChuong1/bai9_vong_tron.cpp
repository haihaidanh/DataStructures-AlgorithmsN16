#include<bits/stdc++.h>
using namespace std;
int cmp(pair<int,int> a,pair<int,int> b){
	return a.first<b.first;
}
int main(){
	bool c[26];
	memset(c,false,sizeof(c));
	string s;cin>>s;
	vector<pair<int,int>> v;
	for(int i=0;i<s.length();i++){
		if(!c[s[i]-65]){
			pair<int,int> p;
			for(int j=i+1;j<s.length();j++){
				if(s[i]==s[j]){
					p.first=i;
					p.second=j;
					v.push_back(p);
					break;
				}		
			}
			
		}
	}

	int cnt=0;
	sort(v.begin(),v.end(),cmp);
	for(int i=0;i<v.size();i++){
		for(int j=i+1;j<v.size();j++){
			if(v[j].second>v[i].second&&v[i].second>v[j].first) cnt++;
		}
	}
	cout<<cnt;
}
