#include<bits/stdc++.h>
using namespace std;
//Code designed by https://linktr.ee/hoangdinh314
#define ll long long
#define pb push_back
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
struct time {
	int gio;
	int phut;
	int giay;
	int sum;

	void nhap() {
		cin >> gio >> phut >> giay;
		sum = gio * 3600 + phut * 60 + giay;
	}
	void in() {
		cout << gio << ' ' << phut << ' ' << giay<< endl;
	}
};
bool cmp(struct time a,struct time b){
	return b.sum>a.sum;
}
void sx(struct time a[],int n){
	sort(a,a+n,cmp);
}
int main() {
	int n;
	cin >> n;
	struct time a[n];
	for (int i = 0; i < n; i++) {
		a[i].nhap();
	}
	sx(a,n);
	for (int i = 0; i < n; i++) {
		a[i].in();
	}
	return 0;
}
