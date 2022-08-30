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
class GiaoVien
{
private:
	string hoten,ten,bomon,mon;
public:
	string ma;
	friend istream& operator >> (istream&,GiaoVien&);
	friend ostream& operator << (ostream&, GiaoVien);
	string getTen(){
		return this->ten;
	}
	string getMa(){
		return this->ma;
	}
};
istream& operator >> (istream& in, GiaoVien& a){
	scanf("\n");
	getline(in,a.hoten);
	getline(in,a.bomon);

	string s1;
	stringstream ss1(a.hoten);
	while(ss1>>s1){
		a.ten=s1;
	}
	string s2,res="";
	stringstream ss2(a.bomon);
	while(ss2>>s2){
		res+=toupper(s2[0]);
	}
	a.mon=res;
	return in;
}
ostream& operator << (ostream& out,GiaoVien a){
	out<<a.ma<<' '<<a.hoten<<' '<<a.mon<<'\n';
	return out;
}
bool cmp(GiaoVien a,GiaoVien b){
	if(a.getTen()<b.getTen()) return true;
	else if(a.getTen()==b.getTen()){
		return a.getMa()<b.getMa();
	}
	return false;
}
void sapxep(GiaoVien a[],int n){
	sort(a,a+n,cmp);
}
int main(){
	int n;cin>>n;
	GiaoVien ds[n];
	fio(i,0,n){
		ds[i].ma="GV"+to_string(i+1);
		if(i+1<10) ds[i].ma.insert(2,"0");
		cin>>ds[i];
	}
	sapxep(ds,n);
	fio(i,0,n) cout<<ds[i];
	return 0;
}
