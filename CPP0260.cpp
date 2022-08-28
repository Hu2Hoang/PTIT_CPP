#include<bits/stdc++.h>
using namespace std;
//Code designed by https://linktr.ee/hoangdinh314
#define ll long long
#define pb push_back
#define fi first
#define se second
#define sz(a) int((a).size())
#define ms(s,n) memset(s,n,sizeof(s))
#define fio(i,a1,b1) for(int i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
#define tolowerr(str) transform(str.begin(),str.end(),str.begin(),::tolower);
#define toupperr(str) transform(str.begin(),str.end(),str.begin(),::toupper);
#define imps(vs) vector<string> vs; fio(i,0,n){ string x;cin>>x; vs.push_back(x); }
#define exps(vs) for(auto x:vs) cout<<x<<' ';
#define imp(vi) vector<int> vi; fio(i,0,n){int x;cin>>x;vi.push_back(x);}
#define exp(vi) for(int x:vi) cout<<x<<' ';
#define sovi(vi) sort(vi.begin(),vi.end())
#define mcd(n) vector<int> mcd(n); partial_sum(vi.begin(),vi.end(),mcd.begin());//mcd[r-1]-mcd[l-2]
#define mav(vi) *max_element(vi.begin(),vi.end())
#define acm(vi) accumulate(vi.begin(),vi.end(),0)
inline ll lcm(ll a,ll b){return (a*b)/__gcd(a,b);}
const int mod=1e9+7;
int main(){
	int n;cin>>n;
	int a[n*n];
	int b[n][n];
	fio(i,0,n*n) cin>>a[i];
	sort(a,a+n*n);
	int temp=0;
	int h1=0,h2=n-1,c1=0,c2=n-1;
	while(h1<=h2&&c1<=c2){
		for(int i=c1;i<=c2;i++){
			b[h1][i]=a[temp++];
		}
		h1++;
		for(int i=h1;i<=h2;i++){
			b[i][c2]=a[temp++];
		}
		c2--;
		if(c1<=c2){
			for(int i=c2;i>=c1;i--){
				b[h2][i]=a[temp++];
			}
		}
		h2--;
		if(h1<=h2){
			for(int i=h2;i>=h1;i--){
				b[i][c1]=a[temp++];
			}
			c1++;
		}
		
	}
	fio(i,0,n){
			fio(j,0,n){
				cout<<b[i][j]<<' ';
			}
			cout<<endl;
		}
	return 0;
}
