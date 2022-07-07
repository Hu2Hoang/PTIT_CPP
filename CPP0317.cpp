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
bool Palindrome(string n){
	int l=0;
	int r=n.length()-1;
	while(r>l){
		if(n[l]%2!=0||n[r]%2!=0||n[l++]!=n[r--]){
			return false;
		}
	}
	return true;
}
int main(){
	w(t){
		string s;
		cin >>s;
		if(Palindrome(s)) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
	return 0;
}
