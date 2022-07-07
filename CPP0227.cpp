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
	w(t){
		int n;cin>>n;
		int a[n][n];
		fio(i,0,n){
			fio(j,0,n){
				cin>>a[i][j];
			}
		}	
		fio(i,0,n){
			if(i%2==0){
				fio(j,0,n) cout<<a[i][j]<<" ";
			} 
			else{
				for(int j=n-1;j>=0;j--) cout<<a[i][j]<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
