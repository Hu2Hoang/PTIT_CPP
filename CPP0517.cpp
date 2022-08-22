#include<bits/stdc++.h>
using namespace std;
//Code designed by https://linktr.ee/hoangdinh314
#define ll long long
#define pb push_back
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
struct NhanVien
{	
	string ten,gt,ns,dc,mst,hd;
};
void nhap(NhanVien &a){
	cin.ignore();
	getline(cin,a.ten);
	cin>>a.gt;
	cin>>a.ns;
	cin.ignore();
	getline(cin,a.dc);
	cin>>a.mst;
	cin>>a.hd;
}
void inds(NhanVien a[],int n){
	fio(i,0,n){
		string ma=to_string(i+1);
		while(ma.size()<5) ma="0"+ma;
		cout<<ma<<' ';
		cout<<a[i].ten<<' '<<a[i].gt<<' '<<a[i].ns<<' '<<a[i].dc<<' '<<a[i].mst<<' '<<a[i].hd;
		cout<<endl;
	}
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}