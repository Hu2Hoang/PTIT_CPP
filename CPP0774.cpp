#include<bits/stdc++.h>
using namespace std;
//Code designed by https://linktr.ee/hoangdinh314
#define ll long long
#define pb push_back
#define fio(i,a1,b1) for(int i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
#define tolower(str) transform(str.begin(),str.end(),str.begin(),::tolower);
#define toupper(str) transform(str.begin(),str.end(),str.begin(),::toupper);
#define imps(vs) vector<string> vs; fio(i,0,n){ string x;cin>>x; vs.push_back(x); }
#define exps(vs) for(auto x:vs) cout<<x<<' ';
#define imp(vi) vector<int> vi; fio(i,0,n){int x;cin>>x;vi.push_back(x);}
#define exp(vi) for(int x:vi) cout<<x<<' ';
#define sovi(vi) sort(vi.begin(),vi.end())
#define mcd(n) vector<int> mcd(n); partial_sum(vi.begin(),vi.end(),mcd.begin());//mcd[r-1]-mcd[l-2]
#define mav(vi) *max_element(vi.begin(),vi.end())
#define acm(vi) accumulate(vi.begin(),vi.end(),0)
ll gt[21];
void init(){
	gt[0]=1;
	fio(i,1,21){
		gt[i]=gt[i-1]*i;
	}
}
void solve(){
	ll res=0;
	int n,r,g,b;cin>>n>>r>>g>>b;
	for(int R=n;R>=r;R--){
		for(int G=n-R;G>=g;G--){
			int B=n-G-R;
			if(B>=b){
				res+=gt[n]/(gt[R]*gt[B]*gt[G]);
			}
		}
	}
	cout<<res;
}
int main(){
	init();
	w(t){
		solve();
		cout<<endl;
	}
	return 0;
}
