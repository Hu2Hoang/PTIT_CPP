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
class PhanSo
{
private:
	ll tu,mau;
public:
	PhanSo(ll t,ll m);
	friend istream& operator >> (istream&, PhanSo&);
	friend ostream& operator << (ostream&, PhanSo);
	void rutgon();
	friend PhanSo operator + (PhanSo,PhanSo);
};
PhanSo::PhanSo(ll t,ll m){
	tu=t;
	mau=m;
}
void PhanSo::rutgon(){
	ll temp=__gcd(tu,mau);
	tu/=temp;
	mau/=temp;
}
PhanSo operator + (PhanSo a,PhanSo b){
	PhanSo tong(1,1);
	ll mc=lcm(a.mau,b.mau);
	tong.tu=mc/a.mau*a.tu + mc/b.mau*b.tu;
	tong.mau=mc;
	ll tmp=__gcd(tong.tu,tong.mau);
	tong.tu/=tmp;
	tong.mau/=tmp;
	return tong;
}
istream& operator >> (istream& in, PhanSo&a){
	in>>a.tu>>a.mau;
	return in;
}
ostream& operator << (ostream& out, PhanSo a){
	out<<a.tu<<"/"<<a.mau;
	return out;
}
int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}