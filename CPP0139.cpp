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
	if(q<=1) return false;
	for(int i=2;i<=sqrt(q);i++){
		if(q%i==0){
			return false;
		}
	}
	return true;
}
int tsum(int m){
	int sum=0;
	while(m!=0){
		sum+=m%10;
		m/=10;
	}
	return sum;
}
bool check(int n){
	if(snt(n)) return false;
	int sum1=0,sum2=0;
	sum2=tsum(n);
	for(int i=2;i<=sqrt(n);i++){
		while(n%i==0){
			sum1+=tsum(i);
			n/=i;
		}
		if(n==1) break;
	}
	if(n>1) sum1+=tsum(n);
	if(sum1==sum2) return true;
	else return false;
}
int main(){
	w(t){
		int n;cin>>n;
		if(check(n)==true) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
	return 0;
}
