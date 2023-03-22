#pragma 03
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include<bits/stdc++.h>

using namespace std ;

typedef vector<int> vi ;
typedef vector<vi> vii ;
typedef pair<int,int> ii ;

#define ll long long
#define fi first
#define se second
#define rep(i,a,n) for(int i = a ; i <= n ; i++ )
#define REP(i,a,n) for(int i = a ; i >= n ; i-- )
#define mem(a,n) memset(n,a,sizeof n)
#define sz(n) n.size()
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
const int mod = 1e9+7 ;
const int N = 2e5+5 ;

int n,m,k ;
vector<vi> G ;

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

