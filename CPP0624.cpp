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
	string ma,ten,email,nganh;
public:
	string lop;
	friend istream& operator >> (istream&,SinhVien&);
	friend ostream& operator << (ostream&, SinhVien);
	string getNganh(){
		return this->nganh;
	}
	
};
istream& operator >> (istream & in,SinhVien& a){
	in>>a.ma;
	in.ignore();
	getline(in,a.ten);
	in>>a.lop>>a.email;
	a.nganh=a.ma.substr(5,2);
	return in;
}
ostream& operator << (ostream& out,SinhVien a){
	out<<a.ma<<' '<<a.ten<<' '<<a.lop<<' '<<a.email<<endl;
	return out;
}
string getMajor(string s){
	if(s=="Ke toan") return "KT";
	if(s=="An toan thong tin") return "AT";
	if(s=="Vien thong") return "VT";
	if(s=="Dien tu") return "DT";
	if(s=="Cong nghe thong tin") return "CN";
}
int main(){
	int n;cin >>n;
	//cout<<n;
	SinhVien ds[n];
	fio(i,0,n) cin>>ds[i];
	int tc;cin>>tc;
	//fio(i,0,n) cout<<ds[i];
	while(tc--){
		scanf("\n");
		string s;getline(cin,s);
		string major=getMajor(s);
		toupperr(s);
		cout<<"DANH SACH SINH VIEN NGANH "<<s<<":\n";
		fio(i,0,n){
			if(major=="CN"||major=="AT"){
				if(ds[i].getNganh()==major&&ds[i].lop[0]!='E') cout<<ds[i];
			}
			else{
				if(ds[i].getNganh()==major) cout<<ds[i];
			}
		}
	}
	return 0;
}
