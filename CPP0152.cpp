#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fio(i,a1,b1) for(int i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
#define exps(vs) for(auto x:vs) cout<<x<<' ';
#define imps(vs) vector<string> vs; fio(i,0,n){ string x;cin>>x; vs.push_back(x); }
#define exp(vi) for(int x:vi) cout<<x<<' ';
#define imp(vi) vector<int> vi; fio(i,0,n){int x;cin>>x;vi.push_back(x);}
int main(){
	w(t){
		int a,m,res;
		cin>>a>>m;
		bool check=false;
		fio(i,0,m){
			if((i*a)%m==1){
				cout<<i;
				check=true;
				break;
			}
		}	
		if(check==false) cout<<-1;
		cout<<endl;
	}
	return 0;
}
