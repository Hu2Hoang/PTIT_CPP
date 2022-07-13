#include<bits/stdc++.h>
using namespace std;
//Code designed by https://linktr.ee/hoangdinh314
#define ll long long
#define fio(i,a1,b1) for(int i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
#define exps(vs) for(auto x:vs) cout<<x<<' ';
#define imps(vs) vector<string> vs; fio(i,0,n){ string x;cin>>x; vs.push_back(x); }
#define exp(vi) for(int x:vi) cout<<x<<' ';
#define imp(vi) vector<int> vi; fio(i,0,n){int x;cin>>x;vi.push_back(x);}
#define sovi(vi) sort(vi.begin(),vi.end())
#define mcd(n) vector<int> mcd(n); partial_sum(vi.begin(),vi.end(),mcd.begin());//mcd[r-1]-mcd[l-2]
#define mav(vi) *max_element(vi.begin(),vi.end())
int main(){
	w(t){
		string n;cin>>n;
		vector<int> vi;
		int s=0;
		fio(i,0,n.length()){
			if(n[i]>='0'&&n[i]<='9'){
				s=s*10+n[i]-'0';
			}
			else{
				vi.push_back(s);
				s=0;
			}
		}	
		cout<<mav(vi);
		//exp(vi);
		cout<<endl;
	}
	return 0;
}
