#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fio(i,a1,b1) for(int i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
#define exps(vs) for(auto x:vs) cout<<x<<' ';
#define imps(vs) vector<string> vs; fio(i,0,n){ string x;cin>>x; vs.push_back(x); }
#define exp(vi) for(int x:vi) cout<<x<<' ';
#define imp(vi) vector<int> vi; fio(i,0,n){int x;cin>>x;vi.push_back(x);}
int prime[10000005];
void sieve(){
	prime[0]=prime[1]=1;
	for (int i = 0; i <= 1000; ++i)
	{
		if(prime[i]==0){
			for(int j=i*i;j<=1000000;j+=i){
				prime[j]=1;
			}
		}
	}
}
int main(){
	sieve();
	w(t){
		int n;cin>>n;
		bool check=false;
		fio(i,2,n/2+1){
			if(prime[i]==0&&prime[n-i]==0) {
				cout<<i<<" "<<n-i<<" ";
				check=true;
				break;
			}
		}
		//if(check==false) cout<<endl;
		cout<<endl;
	}
	return 0;
}
