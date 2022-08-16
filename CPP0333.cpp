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
int main(){
	string s;
	getline(cin, s);
	tolower(s);
	vector<string> vs;
	stringstream ss(s);
	string tok;
	while(ss>>tok){
		vs.pb(tok);
	}
	int n=vs.size();
	for(int i=0;i<n-1;i++){
		vs[i][0]=vs[i][0]-32;
		cout<<vs[i];
		if(i<n-2) cout<<" ";
	}
	cout<<", ";
	int temp=vs[n-1].size();
	fio(i,0,temp){
		vs[n-1][i]=vs[n-1][i]-32;
	}
//	vs[n-1][0]=vs[n-1][0]-32;
	cout<<vs[n-1];
	return 0;
}
//ngUyeN   vAN nAm
//Nguyen Van, Nam