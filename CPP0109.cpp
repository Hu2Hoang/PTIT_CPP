#include<stdio.h>
#include<iostream>
#include<math.h>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
#define fio(i,a1,b1) for(int i=a1;i<b1;i++)
#define w(t) int t;cin>>t;cin.ignore();while(t--)
#define exps(vs) for(auto x:vs) cout<<x<<' ';
#define imps(vs) vector<string> vs; fio(i,0,n){ string x;cin>>x; vs.push_back(x); }
#define exp(vi) for(int x:vi) cout<<x<<' ';
#define imp(vi) vector<int> vi; fio(i,0,n){int x;cin>>x;vi.push_back(x);}
bool oddeven(int n){
	int odd=0,even=0;
	while(n>0){
		if(((n%10)%2)==0) even++;
		else odd++;
		n/=10;
	}
	if(odd==even) return true;
	else return false;
}
int main(){
    int n;cin>>n;
    int temp=0;
    fio(i,pow(10,n-1),pow(10,n)){
    	if(oddeven(i)){
    		temp++;
    		cout<<i<<" ";
    	}
    	if(temp==10) {
    		cout<<endl;
    		temp=0;
    	}
    }
    return 0;
}
