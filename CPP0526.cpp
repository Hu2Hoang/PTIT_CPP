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
struct Person
{	
	string ten,ns;
	int dd,mm,yy;
};
bool cmp(Person a,Person b){
	if(a.yy>b.yy) return true;
	if(a.yy==b.yy){
		if(a.mm>b.mm) return true;
		if(a.mm==b.mm){
			if(a.dd>b.dd) return true;
		}
	}
	return false;
}
int main(){
	int n;cin>>n;
	Person a[n];
	fio(i,0,n){
		cin>>a[i].ten>>a[i].ns;
		a[i].dd=stoi(a[i].ns.substr(0,2));
		a[i].mm=stoi(a[i].ns.substr(3,2));
		a[i].yy=stoi(a[i].ns.substr(6));
	}
	sort(a,a+n,cmp);
	cout<<a[0].ten<<'\n'<<a[n-1].ten;
	return 0;
}
