#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fio(i,a1,b1) for(int i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
#define exps(vs) for(auto x:vs) cout<<x<<' ';
#define imps(vs) vector<string> vs; fio(i,0,n){ string x;cin>>x; vs.push_back(x); }
#define exp(vi) for(int x:vi) cout<<x<<' ';
#define imp(vi) vector<int> vi; fio(i,0,n){int x;cin>>x;vi.push_back(x);}
int main(){
	w(t){
		int n,m=-1e9;
		cin>>n;
		int a[n];
		fio(i,0,n){
			cin>>a[i];
			m=max(m,a[i]);
		}	
		fio(i,1,m+2){
			int temp=0;
			fio(j,0,n){
				if(i==a[j]){
					temp++;
				}
			}
			if(temp==0) {
				cout<<i;
				break;
			}
		}
		cout<<endl;
	}
	return 0;
}
