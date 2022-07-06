#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fio(i,a1,b1) for(int i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
#define exps(vs) for(auto x:vs) cout<<x<<' ';
#define imps(vs) vector<string> vs; fio(i,0,n){ string x;cin>>x; vs.push_back(x); }
#define exp(vi) for(int x:vi) cout<<x<<' ';
#define imp(vi) vector<int> vi; fio(i,0,n){int x;cin>>x;vi.push_back(x);}
int cdx(ll n){
	int res=0,a=0;
	while(n>0){
		a=n%10;
		res+=a;
		n/=10;
	}
	return res;
}
int main(){
	w(t){
		ll n;cin>>n;
		int temp=cdx(n);
		while(temp>=10){
			temp=cdx(temp);
		}
		cout<<temp<<endl;
	}	
	return 0;
}
