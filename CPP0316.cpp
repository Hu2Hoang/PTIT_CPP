#include<bits/stdc++.h>
using namespace std;
//Code designed by https://linktr.ee/hoangdinh314
#define ll long long
#define fio(i,a1,b1) for(int i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);getchar();while(t--)
#define exps(vs) for(auto x:vs) cout<<x<<' ';
#define imps(vs) vector<string> vs; fio(i,0,n){ string x;cin>>x; vs.push_back(x); }
#define exp(vi) for(int x:vi) cout<<x<<' ';
#define imp(vi) vector<int> vi; fio(i,0,n){int x;cin>>x;vi.push_back(x);}
#define sovi(vi) sort(vi.begin(),vi.end())
#define mcd(n) vector<int> mcd(n); partial_sum(vi.begin(),vi.end(),mcd.begin());//mcd[r-1]-mcd[l-2]
int tong(string n){
	int res=0;
	int leng=n.length();
	fio(i,0,leng){
		res+=n[i]-48;
	}
	return res;
}
int main(){
	w(t){
		string n;
		getline(cin,n);
		int temp=tong(n);
		if(temp!=0&&temp%9==0) cout<<"1";
		else cout<<"0";
		cout<<endl;
	}
	return 0;
}
