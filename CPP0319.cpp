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
void minnumber(int m,int s){
	int mmin[m];
	if(s==0){
		(m==1)?cout<<0:cout<<-1;
		return;
	}
	if(s>9*m){
		cout<<-1;
		return;
	}
	s-=1;
	for(int i=m-1;i>0;i--){
		if(s>9){
			mmin[i]=9;
			s-=9;
		}
		else{
			mmin[i]=s;
			s=0;
		}
	}
	mmin[0]=s+1;
	for(int &x:mmin) cout<<x;
}
void maxnumber(int m,int s){
	if(s==0){
		(m==1)?cout<<0:cout<<-1;
		return;
	}
	if(s>9*m){
		cout<<-1;
		return;
	}
	int mmax[m];
	for(int i=0;i<m;i++){
		if(s>9){
			mmax[i]=9;
			s-=9;
		}
		else{
			mmax[i]=s;
			s=0;
		}
	}
	for(int &x:mmax) cout<<x;
}
int main(){
	int m,s;cin >> m >> s;
	minnumber(m,s);
	cout<<" ";
	maxnumber(m,s);
	return 0;
}
