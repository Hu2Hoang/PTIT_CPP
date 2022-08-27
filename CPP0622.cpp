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
class SinhVien
{
private:
	string ma,ten,lop,email;
public:
	friend istream& operator >> (istream&,SinhVien&);
	friend ostream& operator << (ostream&, SinhVien);
	string getLop(){
		return this->lop;
	}
};
istream& operator >> (istream & in,SinhVien& a){
	//in.ignore();
	in>>a.ma;
	in.ignore();
	getline(in,a.ten);
	in>>a.lop>>a.email;
	return in;
}
ostream& operator << (ostream& out,SinhVien a){
	out<<a.ma<<' '<<a.ten<<' '<<a.lop<<' '<<a.email<<'\n';
	return out;
}
int main(){
	int n;cin >>n;
	SinhVien ds[n];
	fio(i,0,n) cin>>ds[i];
	int t;cin>>t;
	while(t--){
		string tlop;
		cin>>tlop;
		cout<<"DANH SACH SINH VIEN LOP "<<tlop<<":\n";
		fio(i,0,n){
			if(ds[i].getLop()==tlop) cout<<ds[i];
		}
	}
	return 0;
}
