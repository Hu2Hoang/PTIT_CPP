#include<bits/stdc++.h>
using namespace std;
#define fio(i,a1,b1) for(int i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
#define exps(vs) for(auto x:vs) cout<<x<<' ';
#define imps(vs) vector<string> vs; fio(i,0,n){ string x;cin>>x; vs.push_back(x); }
#define exp(vi) for(int x:vi) cout<<x<<' ';
#define imp(vi) vector<int> vi; fio(i,0,n){int x;cin>>x;vi.push_back(x);}
int n;
int main(){
	//FAST_IO
	w(t){
		char s;
		cin>>s;
		if(s==(char) toupper(s)) cout<<(char) tolower(s)<<endl;
		else cout<<(char) toupper(s)<<endl;
	}	
	return 0;
}
