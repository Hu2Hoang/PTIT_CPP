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
struct NhanVien
{
	int id;
	string ma,ten,lop,email,addr;
};
void nhap(NhanVien a[],int n){
	fio(i,0,n){
		a[i].id=i+1;
		getline(cin, a[i].ma);
        getline(cin, a[i].ten);
        getline(cin, a[i].lop);
        getline(cin, a[i].email);
        getline(cin, a[i].addr);
		//cin.ignore();
	}
}
void in(NhanVien a){
	cout<<a.id<<' '<<a.ma<<' '<<a.ten<<' '<<a.lop<<' '<<a.email<<' '<<a.addr<<endl;
}
bool cmp(NhanVien a,NhanVien b){
	return a.ma<b.ma;
}
int main(){
	int n;cin>>n;
	cin.ignore();
	int tc;
	struct NhanVien a[n];
	nhap(a,n);
	sort(a,a+n,cmp);
	cin>>tc;
	while(tc--){
		string s;cin>>s;
		fio(i,0,n){
			if(s==a[i].addr) in(a[i]);
		}
	}
	return 0;
}
