#include<bits/stdc++.h>
using namespace std;
//Code designed by https://linktr.ee/hoangdinh314
#define ll long long
#define pb push_back
#define fio(i,a1,b1) for(ll i=a1;i<b1;i++)
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
ll aModM(string &a,ll m){
	ll temp=0;
	fio(i,0,a.size()){
		temp=temp*10+(a[i]-'0');
		temp%=m;
	}
	return temp;
}
ll powMod(string a,ll b,ll m){
	ll a_Pow_m=aModM(a,m);
	ll res=1;
	while(b){
		if(b&1) res=(res*a_Pow_m)%m;
		b=b>>1;
		a_Pow_m=((a_Pow_m*a_Pow_m)%m+m)%m;
	}
	return (res%m+m)%m;
}
int main(){
	w(t){
		string a;
		ll b,m;
		cin>>a>>b>>m;
		cout<<powMod(a,b,m);
		cout<<endl;
	}
	return 0;
}
