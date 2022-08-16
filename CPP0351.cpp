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
void chuanhoa(string &s){
	s[0]=toupper(s[0]);
	fio(i,1,s.size()){
		s[i]=tolower(s[i]);
	}
}
int main(){
	w(t){
		int opt;cin >>opt;
		cin.ignore();
		string s;
		getline(cin, s);
		vector<string> vs;
		stringstream ss(s);
		string tok;
		while(ss>>tok){
			vs.pb(tok);
		}
		int n=vs.size();
		if(opt==1){
			chuanhoa(vs[n-1]);
			cout<<vs[n-1]<<' ';
			fio(i,0,n-1){
				chuanhoa(vs[i]);
				cout<<vs[i]<<' ';
			}
		}
		else{
			fio(i,1,n){
				chuanhoa(vs[i]);
				cout<<vs[i]<<' ';
			}
			chuanhoa(vs[0]);
			cout<<vs[0];
		}
		cout<<endl;
	}
	return 0;
}
