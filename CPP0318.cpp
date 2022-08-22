#include<bits/stdc++.h>
using namespace std;
//Code designed by https://linktr.ee/hoangdinh314
#define ll long long
#define pb push_back
#define fi first
#define se second
#define sz(a) int((a).size())
#define ms(s,n) memset(s,n,sizeof(s))
#define fio(i,a1,b1) for(int i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);cin.ignore();while(t--)
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
inline ll lcm(ll a,ll b){return (a*b)/__gcd(a,b);}
const int mod=1e9+7;
bool asc(string s){
	if(s[0]<s[1]&&s[1]<s[2]&&s[2]<s[3]&&s[3]<s[4]) return 1;
	return 0;
}
bool same(string s){
	if((s[0]==s[1])&&(s[1]==s[2])&&(s[2]==s[3])&&(s[3]==s[4])) return 1;
	return 0;
}
bool same2(string s){
	if((s[0]==s[1]&&(s[1]==s[2]))&&(s[3]==s[4])) return 1;
	return 0;
}
bool lucky(string s){
	fio(i,0,5){
		if(s[i]!='6'&&s[i]!='8') return 0;
	}
	return 1;
}
int main(){
	w(t){
		string s;cin>>s;
		s.erase(0, 7);
		s.erase(3, 1);
		if(asc(s)==1||same(s)==1||same2(s)==1||lucky(s)==1) cout<<"YES";
		else cout<<"NO";
		//cout<<s;
		cout<<endl;
	}
	return 0;
}
