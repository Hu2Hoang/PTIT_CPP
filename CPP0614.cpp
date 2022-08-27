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
class NhanVien
{
private:
	string ma,ten,gt,ns,dc,mst,hd;
	int d,m,y;
public:
	friend istream& operator >> (istream&, NhanVien&);
	friend ostream& operator << (ostream&, NhanVien);

};
string getMa(int i){
	string s=to_string(i);
	while(s.length()<5){
		s='0'+s;
	}
	return s;
}
istream& operator >> (istream & in,NhanVien& a){
	cin.ignore();
	a.ma=getMa(j+1);j++;
	getline(cin,a.ten);
	cin>>a.gt>>a.ns;

	cin.ignore();
	getline(cin,a.dc);
	cin>>a.mst>>a.hd;
	return in;
}

ostream& operator << (ostream& out,NhanVien a){
	out<<a.ma<<' '<<a.ten<<' '<<a.gt<<' '<<a.ns<<' '<<a.dc<<' '<<a.mst<<' '<<a.hd<<endl;
	return out;
}

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}