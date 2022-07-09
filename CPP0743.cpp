#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fio(i,a1,b1) for(int i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);getchar();while(t--)
#define exps(vs) for(auto x:vs) cout<<x<<' ';
#define imps(vs) vector<string> vs; fio(i,0,n){ string x;cin>>x; vs.push_back(x); }
#define exp(vi) for(int x:vi) cout<<x<<' ';
#define imp(vi) vector<int> vi; fio(i,0,n){int x;cin>>x;vi.push_back(x);}
#define sovi(vi) sort(vi.begin(),vi.end())
#define mcd(n) vector<int> mcd(n); partial_sum(vi.begin(),vi.end(),mcd.begin());//mcd[r-1]-mcd[l-2]
int main(){
	w(t){
		string s,v;
		getline(cin,s);
		stringstream ss(s);
		vector<string> vs;
		while(ss>>v){
			vs.push_back(v); 
		}
		for(int i=vs.size()-1;i>=0;i--) cout<<vs[i]<<" ";
		cout<<endl;
	}
	return 0;
}
