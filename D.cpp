#include <bits/stdc++.h>

using namespace std;

int main(void){

	int n;
	cin >> n;
	long long int marksA;
	long long int water[n];
	water[0]=1;
	cin >> marksA;
	long long int sum=marksA;
	for(int i=1; i<n; i++){
		cin>> marksA;
		sum+=marksA;
		water[i]=max(water[i-1], marksA+1);
	}
	long long int sumt=water[n-1];
	for(int i=n-2; i>=0; i--){
		water[i]=max(water[i+1]-1, water[i]);
		sumt+=water[i];
	}

	long long int ans=sumt-sum-n;
	cout << ans << "\n";




	return 0;
}