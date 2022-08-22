#include <bits/stdc++.h>
using namespace std;
//Code designed by https://linktr.ee/hoangdinh314
#define ms(s,n) memset(s,n,sizeof(s))
#define all(a) a.begin(),a.end()
#define present(t, x) (t.find(x) != t.end())
#define sz(a) int((a).size())
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define FORd(i, a, b) for (int i = (a) - 1; i >= (b); --i)
#define endl "\n"
 
void TC(){
	int n,m; cin >> n >> m;
	int a[n][m], b[n][m];
	FOR(i, 0, n){
		FOR(j, 0, m){
			cin >> a[i][j];
		}
	}
	int h1 = 0, h2 = n-1, c1 = 0, c2 = m-1;
	while(h1 <= h2 && c1 <= c2){
		for(int i = c1 ; i <= c2; i++){
			cout << a[h1][i]<<" ";
		}
		++h1;
		for(int i = h1; i <= h2; i++){
			cout <<a[i][c2]<<" ";
		}
		c2--;
		if(h1<=h2){
			for(int i = c2 ; i>= c1; i--){
				cout <<a[h2][i]<<" ";
			}
			--h2;
		}
		if(c1 <= c2){
			for(int i = h2 ; i >= h1 ;i--){
				cout << a[i][c1] << " ";
			}
			++c1;
		}
	}
	cout << endl;
}
 
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t; cin >> t;
	while(t--){
		TC();
	}
}
