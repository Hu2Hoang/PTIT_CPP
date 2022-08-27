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
struct SinhVien
{
	string ma,ten,lop;
	float t,l,h;
};
void nhap(SinhVien a[],int n){
	fio(i,0,n){
		cin>>a[i].ma;
		cin.ignore();
		getline(cin,a[i].ten);
		cin>>a[i].lop>>a[i].t>>a[i].l>>a[i].h;
	}
}
bool cmp(SinhVien a,SinhVien b){
	return a.ten<b.ten;
}
void sapxep(SinhVien a[],int n){
	sort(a,a+n,cmp);
}
void in(SinhVien a[],int n){
	fio(i,0,n){
		cout<<i+1<<' '<<a[i].ma<<' '<<a[i].ten<<' '<<a[i].lop<<' ';
		printf("%.1f %.1f %.1f\n",a[i].t,a[i].l,a[i].h);
	}
}
int main(){
	int n;cin >>n;
	SinhVien ds[n];
	nhap(ds,n);
	sapxep(ds, n);
	in(ds,n);
	return 0;
}
