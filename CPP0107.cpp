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
	string d1="A B B A D C C A B D C C A B D";
	string d2="A C C A B C D D B B C D D B B";
	w(t){
		int i,code,res=0,tres=0;
		string da;
		cin>>code;
		getline(cin,da);cin.ignore();
		cout<<da;
		int temp=1;
	//	cout<<d1[0]<<' '<<da[1]<<endl;
		if(code==101){
			fio(i,0,29){
				if(da[i+1]==d1[i]) res++;
				
			}
		}
		else{
			fio(i,0,15){
				if(da[i]==d2[i]) res++;
			}
		}
		//cout<<res<<endl;
		// cout<<setprecision(2)<<fixed<<(float) res*(10.00/15)<<endl; 
		// i=0,temp=0,res=0;
	}
	return 0;
}
