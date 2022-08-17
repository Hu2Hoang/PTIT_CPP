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
int main(){
	int m,n,p;cin>>m>>n>>p;
	int a[51][51],b[51][51],temp[51][51]={0};
	fio(i,0,m){
		fio(j,0,n){
			cin>>a[i][j];
		}
	}
	
	fio(i,0,n){
		fio(j,0,p){
			cin>>b[i][j];
		}
	}
	fio(i,0,m){
		fio(j,0,p){
			temp[i][j]=0;
			fio(l,0,n){
				temp[i][j]+=a[i][l]*b[l][j];
			}
		}
	}
	fio(i,0,m){
		for(int j=0;j<p;j++){
			cout<<temp[i][j]<<' ';
		}
		cout<<endl;
	}
	return 0;
}
