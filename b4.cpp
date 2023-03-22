#include<bits/stdc++.h>

using namespace std ;

int n,m,k ;

int main(){
	fastio ;
	int t;
	cin >> n; 
	int a[n+1][n+1];
	for ( int i = 1 ; i<= n; i++ ){
		for ( int j = 1 ; j<=n ; j++ ) a[i][j]=0; 
		a[i][1] = 1; 
	} 
	for ( int i = 1 ;i <= n ; i++) {
		cout << a[i][1] << " "; 
		for ( int j = 2 ; j <= i ; j++ ){
			a[i][j] = a[i-1][j-1] + a[i-1][j]; 
			cout << a[i][j] << " ";
		}
		cout << endl; 
	}
}

