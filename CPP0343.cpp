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
int main(){
	w(t){
		//cin.ignore();
		int n=0,c=0,l=0;
		char kt=' ';
		while(kt!='\n'){
			int x;cin>>x;
			n++;
			if(x&1) l++;
			else c++;
			kt=getchar();
		}	
		if((!(n&1)&&c>l)||((n&1)&&l>c)) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
	return 0;
}
