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
ll res=0;
void solve(string s){
	if(s.length()>10) return;
	fio(i,0,s.length()){
		if(s[i]=='-') continue;
		if(s[i]<'0'||s[i]>'9') return;
	}
	bool checkNeg=false;
	if(s[0]=='-'){
		s.erase(0,1);
		checkNeg=true;
	}
	int num=0;
	fio(i,0,s.length()){
		num=num*10 + (s[i]-'0');
	}
	if(checkNeg) num=-num;
	if(num>=INT_MIN && num<= INT_MAX) res+=num;
}
int main(){
	ifstream fi;
	fi.open("DATA.in");
	string s;
	while(fi>>s){
		solve(s);
	}
	cout<<res;
	return 0;
}
