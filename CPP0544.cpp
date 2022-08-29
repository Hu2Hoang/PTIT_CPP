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
#define PI 3.141592653589793238
struct Data
{	
	double x,y;
};
double kc(Data a,Data b){
	double d=sqrt(pow(a.x-b.x,2)+pow(a.y-b.y,2));
	return d;
}
void solve(){
	Data a,b,c;
	cin>>a.x>>a.y>>b.x>>b.y>>c.x>>c.y;
	double A,B,C;
	A=kc(a,b);
	B=kc(b,c);
	C=kc(a,c);
	if(!(A+B>C&&B+C>A&&C+A>B)){
		cout<<"INVALID";
		return;
	}
	double p=(A+B+C)/2;
	double s=sqrt(p*(p-A)*(p-B)*(p-C));
	double R=A*B*C/(4*s);
	double res=PI*R*R;
	printf("%.3lf",res);
}
int main(){
	w(t){
		solve();
		cout<<endl;
	}
	return 0;
}
