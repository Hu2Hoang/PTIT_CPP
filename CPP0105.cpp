#include<stdio.h>
#include<iostream>
#include<math.h>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
#define fio(i,a1,b1) for(int i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
#define exps(vs) for(auto x:vs) cout<<x<<' ';
#define imps(vs) vector<string> vs; fio(i,0,n){ string x;cin>>x; vs.push_back(x); }
#define exp(vi) for(int x:vi) cout<<x<<' ';
#define imp(vi) vector<int> vi; fio(i,0,n){int x;cin>>x;vi.push_back(x);}
int main(){
	w(t){
		string n;
		cin>>n;
		bool check=true;
		fio(i,0,n.length()){
			if(n[i]=='0'||n[i]=='6'||n[i]=='8'){
				continue;
			}
			else{
				check=false;
				break;
			}
		}
		if(check) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}	
	return 0;
}