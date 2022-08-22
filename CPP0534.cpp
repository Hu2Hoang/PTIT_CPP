#include<bits/stdc++.h>
using namespace std;
//Code designed by https://linktr.ee/hoangdinh314
#define ll long long
#define pb push_back
#define fi first
#define se second
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
struct cmp{
	bool operator()(const string&a,const string&b) const{
		return a.length()>b.length();
	}
};

bool Palindrome(string n){
	int l=0;
	int r=n.length()-1;
	while(r>l){
		if(n[l++]!=n[r--]){
			return false;
		}
	}
	return true;
}
int main(){
	map<string,int,cmp> mp;
	int n=0;
	string s;
	while(cin>>s){
		if(s=="1") continue;
		if(Palindrome(s)==true){
			n++;
			mp[s]++;
		}
	}
	//cout<<n<<endl;
	// for(auto it=mp.rbegin();it!=mp.rend();it++){
	// 	cout<<it->first<<' '<<it->second<<endl;
	// }
	// cout<<endl;
	// for(auto x:mp){
	// 	cout<<x.fi<<' '<<x.se<<endl;
	// }
	// cout<<endl;
	for(map<string,int>::iterator it=mp.begin();it!=mp.end();it++){
		cout<<it->first<<' '<<it->second<<endl;
	}
	return 0;
}
//12321 456 12321 34 56 9999999999999999999 12 43 34 54 34 54 34 54 657 45 554 12321 12321 65 76 45 45 34 53 546 565 65645 65 65 35 65 565 565 1
