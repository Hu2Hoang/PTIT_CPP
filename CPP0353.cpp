#include<bits/stdc++.h>
using namespace std;
//Code designed by https://linktr.ee/hoangdinh314
#define ll long long
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
	w(t){
		string n;cin>>n;
		tolower(n);
		char temp;
		fio(i,0,n.length()){
			temp=n[i];
			if(temp=='a'||temp=='b'||temp=='c') n[i]='2';
			else if(n[i]=='d'||n[i]=='e'||n[i]=='f') n[i]='3';
			else if(n[i]=='g'||n[i]=='h'||n[i]=='i') n[i]='4';
			else if(n[i]=='j'||n[i]=='k'||n[i]=='l') n[i]='5';
			else if(n[i]=='m'||n[i]=='n'||n[i]=='o') n[i]='6';
			else if(n[i]=='p'||n[i]=='q'||n[i]=='r'||n[i]=='s') n[i]='7';
			else if(n[i]=='t'||n[i]=='u'||n[i]=='v') n[i]='8';
			else n[i]='9';
		}
		if(Palindrome(n)) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
	return 0;
}
