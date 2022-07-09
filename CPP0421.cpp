#include<bits/stdc++.h>
using namespace std;
//Code designed by https://linktr.ee/hoangdinh314
#define ll long long
#define fio(i,a1,b1) for(ll i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
#define exps(vs) for(auto x:vs) cout<<x<<' ';
#define imps(vs) vector<string> vs; fio(i,0,n){ string x;cin>>x; vs.push_back(x); }
#define exp(vi) for(ll x:vi) cout<<x<<' ';
#define imp(vi) vector<ll> vi; fio(i,0,n){ll x;cin>>x;vi.push_back(x);}
#define sovi(vi) sort(vi.begin(),vi.end())
#define mcd(n) vector<int> mcd(n); partial_sum(vi.begin(),vi.end(),mcd.begin());//mcd[r-1]-mcd[l-2]
int main(){
	w(t){
		int n;cin>>n;
		imp(vi);
		vector<ll> vb(n,-1);
		fio(i,0,n){
			fio(j,0,n){
				if(vi[j]==i){
					vb[i]=i;
				}
			}
		}
		exp(vb);
		cout<<endl;
	}
	return 0;
}
