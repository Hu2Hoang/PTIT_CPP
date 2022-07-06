#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fio(i,a1,b1) for(ll i=a1;i<=b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
#define exps(vs) for(auto x:vs) cout<<x<<' ';
#define imps(vs) vector<string> vs; fio(i,0,n){ string x;cin>>x; vs.push_back(x); }
#define exp(vi) for(int x:vi) cout<<x<<' ';
#define imp(vi) vector<int> vi; fio(i,0,n){int x;cin>>x;vi.push_back(x);}
long long lcm(ll a,ll b){
	return (a*b)/__gcd(a,b);
}
int main(){
	w(t){
		ll n,res=1;
		cin>>n;
		fio(i,2,n){
			res=lcm(res,i);
		}
		cout<<res<<endl;
	}
	return 0;
}
