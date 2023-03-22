#include<bits/stdc++.h> 
using namespace std;
int a[10];
#define fi first
#define se second
int main()
{
	int n,m; 
	cin >> n;
	pair<int,int> toan[5][n+1],ly[5][n+1],anh[5][n+1],tong[n+1]; 
	for(int i = 1 ; i <= n ; i++ ) {
		int a,b,c; 
		cin >> a >> b >> c; 
		tong[i].fi = a+b+c; 
		tong[i].se = i;
		for ( int j=1 ; j <= 4 ; j++ ){
			toan[j][i].fi = a;
			toan[j][i].se = ly[j][i].se = anh[j][i].se = i;
			ly[j][i].fi = b;
			anh[j][i].fi = c; 
		}
	}
	sort(toan[1]+1,toan[1]+n+1); 
	cout << "Theo diem mon toan" << endl; 
	for ( int i = n; i>0 ; i-- ){
		int x = toan[1][i].se ; 
		cout << "Sinh Vien " << x << " " << toan[1][i].fi << " " << ly[1][x].fi << " " << anh[1][x].fi << endl; 
	}
	sort(ly[2]+1,ly[2]+n+1); 
	cout << "Theo diem mon ly" << endl; 
	for ( int i = n ; i > 0 ; i-- ){
		int x = ly[2][i].se ; 
		cout << "Sinh Vien " << x << " " << toan[x][i].fi << " " << ly[2][i].fi << " " << anh[2][x].fi << endl; 
	}
	sort(anh[3]+1,anh[3]+n+1); 
	cout << "Theo diem mon anh" << endl; 
	for ( int i = n; i > 0 ; i-- ){
		int x = anh[3][i].se ; 
		cout << "Sinh Vien " << x << " " << toan[3][x].fi << " " << ly[3][x].fi << " " << anh[3][i].fi << endl; 
	}
	sort(tong+1,tong+n+1);
	cout << "theo diem tong" << endl;
	for ( int i = n; i > 0 ; i-- ){
		int x = tong[i].se ;
		cout << "Sinh Vien " << x << " " << tong[i].fi << " " << toan[4][x].fi << " " << ly[4][x].fi << " " << anh[4][i].fi << endl; 
	}
}
