#include <bits/stdc++.h>

using namespace std;

int main(void){

	long long int n, u;
	cin >> n >> u;

	vector<long long int> A(n);
	for(int i=0; i<n; i++){
		cin >> A[i];
	}

	double maxi=0;
	for(int i=0; i<n-2; i++){
		double aux=A[i+1];
		vector<long long int>::iterator up;
		up=upper_bound(A.begin()+i, A.end(), u+A[i]);
		if(up-A.begin()+i>2){
			up--;
			aux=(*up)-aux;
			aux=aux/((double) (*up)-A[i]);
			maxi=max(maxi, aux);	
		}
	}
	if(maxi>0) cout << fixed << setprecision(9) <<  maxi << "\n";
	else cout << -1 << "\n";

	return 0;
}