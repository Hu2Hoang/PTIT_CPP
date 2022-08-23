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
struct Items
{
	int id;
	string name,classify;
	float buy,sell,profit;
};
bool cmp(Items a,Items b){
	if(a.profit>b.profit) return true;
	return false;
}
int main(){
	int n;cin>>n;
	Items a[n];
	cin.ignore();
	fio(i,0,n){
		a[i].id=i+1;
		getline(cin,a[i].name);
		getline(cin,a[i].classify);
		cin>>a[i].buy>>a[i].sell;
		a[i].profit=a[i].sell-a[i].buy;
		cin.ignore();
	}
	sort(a,a+n,cmp);
	fio(i,0,n){
		cout<<a[i].id<<' '<<a[i].name<<' '<<a[i].classify;
		printf(" %.2f\n",a[i].profit);
	}
	return 0;
}
