#include <bits/stdc++.h>

using namespace std;


int main(void){
	int n, m;
	cin >> n >>  m;
	int columns[m];
	char table[n][m];
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin >> table[i][j];
		}
	}
	fill(columns, columns+m, -1);	
	for(int i=0; i<n; i++){
		int j=0;
		while(j<m && table[i][j]!='#'){
			j++;
		}
		if(j<m){
			int ind=0;
			if(columns[j]==-1){
				columns[j]=j;
				ind=1;
			}
			else{
				if(columns[j]!=j){
					cout << "NO\n";
					return 0;
				}
			}
			for(int k=j+1; k<m; k++){
				if(table[i][k]=='#'){
					if(columns[k]==-1){
						if(ind==1) columns[k]=columns[j];
						else{
							cout << "NO\n";
							return 0;
						}
					}
					else{
						if(columns[k]!=columns[j]){
							cout << "NO\n";
							return 0;
						}
					}
				}
				else{
					if(columns[k]==columns[j]){
						cout << "NO\n";
						return 0;
					}
				}
			}
		}
	}
	cout << "YES\n";
	return 0;
}