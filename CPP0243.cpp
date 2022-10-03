#include<bits/stdc++.h>
using namespace std;
//Code designed by https://linktr.ee/hoangdinh314
#define pb push_back
#define ll long long
#define fio(i,a1,b1) for(int i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
#define exps(vs) for(auto x:vs) cout<<x<<' ';
#define imps(vs) vector<string> vs; fio(i,0,n){ string x;cin>>x; vs.push_back(x); }
#define exp(vi) for(int x:vi) cout<<x<<' ';
#define imp(vi) vector<int> vi; fio(i,0,n){int x;cin>>x;vi.push_back(x);}
#define sovi(vi) sort(vi.begin(),vi.end())
#define mcd(n) vector<int> mcd(n); partial_sum(vi.begin(),vi.end(),mcd.begin());//mcd[r-1]-mcd[l-2]
int main(){
	w(t){
		int n,m;
		cin>>n>>m;
		vector<int> a(n),b(m);
		map<int,int> dd;
		for(int &x:a) cin>>x;
		for(int &x:b){
			cin>>x;
			dd[x]=1;
		}
		vector<int> res;
		for(int x:a){
			if(dd[x]>=1) dd[x]++;
			else res.pb(x);
		}
		for(int x:b){
			if(dd[x]>0){
				for(int j=1;j<dd[x];j++) cout<<x<<" ";
				dd[x]=0;
			}
		}
		sovi(res);
		exp(res);
		cout<<endl;
	}
	return 0;
}