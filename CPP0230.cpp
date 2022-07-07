#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fio(i,a1,b1) for(int i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
#define exps(vs) for(auto x:vs) cout<<x<<' ';
#define imps(vs) vector<string> vs; fio(i,0,n){ string x;cin>>x; vs.push_back(x); }
#define exp(vi) for(int x:vi) cout<<x<<' ';
#define imp(vi) vector<int> vi; fio(i,0,n){int x;cin>>x;vi.push_back(x);}
#define sort(vi) sort(vi.begin(),vi.end())
#define mcd(n) vector<int> mcd(n); partial_sum(vi.begin(),vi.end(),mcd.begin());//mcd[r-1]-mcd[l-2]
int main(){
	int n;cin>>n;
	int a[n][3];
	fio(i,0,n){
		fio(j,0,3){
			cin>>a[i][j];
		}
	}	
	int res=0;
	fio(i,0,n){
		int d1=0,d2=0;
		fio(j,0,3){
			if(a[i][j]==1) d1++;
			else d2++;
		}
		if(d1>d2) res++;
	}
	cout<<res;
	return 0;
}
