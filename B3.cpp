#include<bits/stdc++.h> 
using namespace std;
int a[10];
int main()
{
	int n,m ;
	cin >> n ;
	while(n--)
	{ 
		cin >> m ; a[m]++;
	}
	for ( int i=0 ; i<= 9 ; i++) cout << a[i] << " ";
}
