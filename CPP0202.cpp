#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fio(i,a1,b1) for(ll i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
#define exps(vs) for(auto x:vs) cout<<x<<' ';
#define imps(vs) vector<string> vs; fio(i,0,n){ string x;cin>>x; vs.push_back(x); }
#define exp(vi) for(ll x:vi) cout<<x<<' ';
#define imp(vi) vector<ll> vi; fio(i,0,n){ll x;cin>>x;vi.push_back(x);}
int main(){
	w(t){
		int n;cin>>n;
		imp(vi);
		sort(vi.begin(),vi.end());
		ll res=1e9;
		fio(i,0,vi.size()-1){
			res=min(res,vi[i+1]-vi[i]);
		}
		cout<<res<<endl;
	}
	return 0;
}
