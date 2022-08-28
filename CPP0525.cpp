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
	double t,l,h;
};
void nhap(SinhVien &a){
		cin.ignore();
		cin>>a.ma;
		cin.ignore();
		getline(cin,a.ten);
		cin>>a.lop>>a.t>>a.l>>a.h;
}
bool cmp(SinhVien a,SinhVien b){
	return a.ten<b.ten;
}
void sapxep(SinhVien a[],int n){
	sort(a,a+n,cmp);
}
void in(SinhVien a){
		cout<<a.ma<<' '<<a.ten<<' '<<a.lop<<' ';
		//printf("%.1lf %.1lf %.1lf\n",a[i].t,a[i].l,a[i].h);
		cout<<fixed<<setprecision(1)<<a.t<<" "<<a.l<<" "<<a.h<<'\n';
}
int main(){
	int n;cin >>n;
	SinhVien ds[n];
	for(int i=0;i<n;i++) nhap(ds[i]);
	sapxep(ds, n);
	for(int i=0;i<n;i++){
		cout<<i+1<<" ";
		in(ds[i]);
	}
	return 0;
}
