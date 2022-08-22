#include<bits/stdc++.h>
using namespace std;
//Code designed by https://linktr.ee/hoangdinh314
#define ll long long
#define pb push_back
#define fi first
#define se second

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

struct PhanSo{
	ll tu,mau;
};
void nhap(PhanSo &a){
	cin>>a.tu>>a.mau;
}
void rutgon(PhanSo &a){
	ll temp=__gcd(a.tu,a.mau);
	a.tu/=temp;
	a.mau/=temp;
}
void in(PhanSo a){
	cout<<a.tu<<"/"<<a.mau;
	cout<<' ';
}
PhanSo tong(PhanSo a,PhanSo b){
	ll mc=lcm(a.mau,b.mau);
	a.tu=a.tu*(mc/a.mau);
	b.tu=b.tu*(mc/b.mau);
	a.tu+=b.tu;
	a.mau=mc;
	rutgon(a);
	return a;
}
void process(PhanSo &a,PhanSo &b){
	PhanSo c= tong(a,b);
	c.tu*=c.tu;
	c.mau*=c.mau;
	in(c);
	PhanSo d;
	d.tu=a.tu*b.tu*c.tu;
	d.mau=a.mau*b.mau*c.mau;
	rutgon(d);
	in(d);
	cout<<endl;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}