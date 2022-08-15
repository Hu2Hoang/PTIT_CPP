#include<bits/stdc++.h>
using namespace std;
//Code designed by https://linktr.ee/hoangdinh314
#define pb push_back
#define ll long long
#define fio(i,a1,b1) for(int i=a1;i<b1;i+=2)
#define w(t) int t;scanf("%d",&t);cin.ignore();while(t--)
#define exps(vs) for(auto x:vs) cout<<x<<' ';
#define touppper(su) transform(su.begin(), su.end(), su.begin(), ::toupper);
#define imps(vs) vector<string> vs; fio(i,0,n){ string x;cin>>x; vs.push_back(x); }
#define exp(vi) for(int x:vi) cout<<x<<' ';
#define imp(vi) vector<int> vi; fio(i,0,n){int x;cin>>x;vi.push_back(x);}
#define sovi(vi) sort(vi.begin(),vi.end())
#define mcd(n) vector<int> mcd(n); partial_sum(vi.begin(),vi.end(),mcd.begin());//mcd[r-1]-mcd[l-2]
int main(){
	string d1="101 A B B A D C C A B D C C A B D"; 
	string d2="102 A C C A B C D D B B C D D B B";
	w(t){
		float wrong=0;
		float res=0;
		string s;getline(cin,s);
		touppper(s);
		if(s[2]=='1'){
			fio(i,4,33){
				if(s[i]==d1[i]) continue;
				else wrong+=(float)2/3;
			}
			res=10.00 - wrong;
			printf("%.2f",res);
		}
		if(s[2]=='2'){
			fio(i,4,33){
				if(s[i]==d2[i]) continue;
				else wrong+=(float)2/3;
			}
			res=10.00 - wrong;
			printf("%.2f",res);
		}
		cout<<endl;
	}
	return 0;
}