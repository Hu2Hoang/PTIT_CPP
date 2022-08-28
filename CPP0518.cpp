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
int j=0;
struct NhanVien
{
	string ma,ten,gt,ns,dc,mst,hd;
	int d,m,y;
};
string getMa(int i){
	string s=to_string(i);
	while(s.length()<5){
		s='0'+s;
	}
	return s;
}
bool cmp(NhanVien a, NhanVien b){
	if(a.y<b.y) return true;
	if(a.y==b.y){
		if(a.m<b.m) return true;
		if(a.m==b.m){
			if(a.d<b.d) return true;
		}
	}
	return false;
}
void sapxep(NhanVien a[], int n){
	sort(a,a+n,cmp);
}
void nhap(NhanVien &a){
		cin.ignore();
		a.ma=getMa(j+1); j++;
		getline(cin,a.ten);
		cin>>a.gt>>a.ns;
		cin.ignore();
		getline(cin,a.dc);
		cin>>a.mst>>a.hd;
		a.m=stoi(a.ns.substr(0,2));
		a.d=stoi(a.ns.substr(3,2));
		a.y=stoi(a.ns.substr(6));
}
void inds(NhanVien a[],int n){
	fio(i,0,n){
		cout<<a[i].ma<<' '<<a[i].ten<<' '<<a[i].gt<<' '<<a[i].ns<<' '<<a[i].dc<<' '<<a[i].mst<<' '<<a[i].hd<<endl;
	}
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}