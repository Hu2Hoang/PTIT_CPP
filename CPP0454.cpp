#include<bits/stdc++.h>
using namespace std;
//Code designed by https://linktr.ee/hoangdinh314
#define ll long long
#define fio(i,a1,b1) for(ll i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
#define exps(vs) for(auto x:vs) cout<<x<<' ';
#define imps(vs) vector<string> vs; fio(i,0,n){ string x;cin>>x; vs.push_back(x); }
#define exp(vi) for(int x:vi) cout<<x<<' ';
#define imp(vi) vector<ll> vi; fio(i,0,n){ll x;cin>>x;vi.push_back(x*x);}
#define sovi(vi) sort(vi.begin(),vi.end())
#define mcd(n) vector<int> mcd(n); partial_sum(vi.begin(),vi.end(),mcd.begin());//mcd[r-1]-mcd[l-2]
bool check(vector<ll> a,int n){
	for(ll i=n-1;i>=2;i--){
		int l=0,r; r=i-1;
		while(l<r){
			if(a[l]+a[r]==a[i]) return true;
			else if(a[l]+a[r]>a[i]) r--;
			else l++;
		}
	}
	return false;
}
int main(){
	w(t){
		int n;cin>>n;
		imp(vi);
		sovi(vi);
		if(check(vi,n)) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
	return 0;
}
