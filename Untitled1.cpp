#include<bits/stdc++.h>
using namespace std;

int main(){
	int s=0,n;
	for(int i=1;i<=n;i++){
		if(i%2==1){
			s+=i;
		}else{
			s+=(-i);
		}
	}
	cout<<s;
}
