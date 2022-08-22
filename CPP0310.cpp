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
ll min_str(string a,string b){
	fio(i,0,a.length()){
		if(a[i]=='6') a[i]='5';
	}
	fio(i,0,b.length()) if(b[i]=='6') b[i]='5';
	ll x=stoll(a),y=stoll(b);
	return x+y;
}
ll max_str(string a,string b){
	fio(i,0,a.length()){
		if(a[i]=='5') a[i]='6';
	}
	fio(i,0,b.length()) if(b[i]=='5') b[i]='6';
	ll x=stoll(a),y=stoll(b);
	return x+y;
}
int main(){
	w(t){
		string a,b;cin>>a>>b;
		cout<<min_str(a,b)<<' '<<max_str(a,b);
		cout<<endl;
	}
	return 0;
}
