#include <bits/stdc++.h>

using namespace std;


int main(void){

	int n;
	string c;
	cin >> n >> c;

	for(int i=0; i<n-1; i++){
		if(c[i]!='?' && c[i]==c[i+1]){
			cout << "NO\n";
			return 0;
		}
	}

	if(c[0]=='?') cout << "YES\n";
	else{
		int sig=0;
		while(sig<n){
			while(sig<n && c[sig]!='?'){
				sig++;
			}
			if(sig==n-1 || c[sig-1]==c[sig+1] || c[sig+1]=='?'){
				cout << "YES\n";
				return 0;
			}
			else{
				sig++;
			}
		}
		cout << "NO\n";
	}
	return 0;
}