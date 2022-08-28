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
bool snt(long long q){
	int temp=0;
	if(q<=1) return false;
	fio(i,2,sqrt(q)+1){
		if(q%i==0){
			return false;
		}
	}
	return true;
}
bool dsc(ll n){
	int temp=-1;
	if(n<10) return false;
	while(n>0){
		if(temp>=n%10) return false;
		temp=n%10;
		n/=10;
	}
	return true;
}
bool asc(ll n){
	int temp=10;
	while(n>0){
		if(temp<=n%10) return false;
		temp=n%10;
		n/=10;
	}
	return true;
}
int main(){
	w(t){
		int res=0;
		int n;cin >>n;
		int l=pow(10,n-1);
		int r=pow(10,n)-1;
		for(int i=l;i<=r;i++){
				if(asc(i)||dsc(i)){
					if(snt(i)) res++;
				}
		}
		cout<<res;
		cout<<endl;
	}
	return 0;
}
