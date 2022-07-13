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
#define sortvi(vi) sort(vi.begin(),vi.end())
#define mcd(n) vector<int> mcd(n); partial_sum(vi.begin(),vi.end(),mcd.begin());//mcd[r-1]-mcd[l-2]
int main(){
	w(t){
		int n;cin>>n;
		deque<int> di;
		fio(i,0,n){
			int x;cin>>x;
			di.push_back(x); 
		}	
		int i;
		sort(di.begin(),di.end());
		if(n%2!=0){
			fio(i,0,n){
				cout<<di.back()<<" ";di.pop_back();
				if(i==(n/2)) break;
				cout<<di.front()<<" ";di.pop_front();
			}
		}
		else{
			fio(i,0,n/2){
				cout<<di.back()<<" ";di.pop_back();
				cout<<di.front()<<" ";di.pop_front();
			}
		}
		cout<<endl;
	}
	return 0;
}
