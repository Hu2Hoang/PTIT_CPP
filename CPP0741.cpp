#include<bits/stdc++.h>
using namespace std;
//Code designed by https://linktr.ee/hoangdinh314
#define ll long long
#define pb push_back
#define fio(i,a1,b1) for(int i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
#define tolower(str) transform(str.begin(),str.end(),str.begin(),::tolower);
#define toupper(str) transform(str.begin(),str.end(),str.begin(),::toupper);
#define imps(vs) vector<string> vs; fio(i,0,n){ string x;cin>>x; vs.push_back(x); }
#define exps(vs) for(auto x:vs) cout<<x<<' ';
#define imp(vi) vector<int> vi; fio(i,0,n){int x;cin>>x;vi.push_back(x);}
#define exp(vi) for(int x:vi) cout<<x<<' ';
#define sovi(vi) sort(vi.begin(),vi.end())
#define mcd(n) vector<int> mcd(n); partial_sum(vi.begin(),vi.end(),mcd.begin());//mcd[r-1]-mcd[l-2]
#define mav(vi) *max_element(vi.begin(),vi.end())
#define acm(vi) accumulate(vi.begin(),vi.end(),0)
ll mu2(ll x){
	return x*x;
}
int binary_pow(ll x,ll y,ll p){
	//if (y == 0) return 1;
   // if (y == 1) return x;
    if (y % 2 == 0) return binary_pow(x*x%p,y/2,p)%p;
    else return x * binary_pow(x*x%p,y/2,p)%p;
}
int main(){
	w(t){
		ll x,y;
		ll p;
		cin>>x>>y>>p;
		cout<<binary_pow(x,y,p);
		cout<<endl;
	}
	return 0;
}
