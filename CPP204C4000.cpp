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
struct SinhVien
{
	string ma="N20DCCN001";
	string name,lop,ns;
	float gpa;
};
void nhapThongTinSV(SinhVien &a){
	getline(cin,a.name);
	cin>>a.lop>>a.ns>>a.gpa;
}
void inThongTinSV(SinhVien a){
	if(a.ns[1]=='/') a.ns="0"+a.ns;
	if(a.ns[4]=='/') a.ns.insert(3,"0");
	cout<<a.ma<<' '<<a.name<<' '<<a.lop<<' '<<a.ns<<' ';
	printf("%.2f",a.gpa);
}
int main(){
	struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
	return 0;
}
