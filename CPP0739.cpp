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
#define exp(vi) for(int x:vi) cout<<x;
#define sovi(vi) sort(vi.begin(),vi.end())
#define mcd(n) vector<int> mcd(n); partial_sum(vi.begin(),vi.end(),mcd.begin());//mcd[r-1]-mcd[l-2]
#define mav(vi) *max_element(vi.begin(),vi.end())
#define acm(vi) accumulate(vi.begin(),vi.end(),0)
int main(){
	w(t){
		string s;cin >> s;
		int min_val=0,pos_I=0;
		vector<int> vi;
		if(s[0]=='I'){
			vi.pb(1);
			vi.pb(2);
			min_val=3;
			pos_I=1;
		}
		else{
			vi.pb(2);
			vi.pb(1);
			min_val=3;
			pos_I=0;
		}
		for(int i=1;i<s.size();i++){
			if(s[i]=='I'){
				vi.pb(min_val);
				min_val++;
				pos_I=i+1;
			}
			else{
				vi.pb(vi[i]);
				for(int j=pos_I;j<=i;j++){
					vi[j]++;
				}
				min_val++;
			}
		}
		exp(vi);
		cout<<endl;
	}
	return 0;
}
