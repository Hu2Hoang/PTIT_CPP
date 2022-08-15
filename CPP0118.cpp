#include<bits/stdc++.h>
using namespace std;
//Code designed by https://linktr.ee/hoangdinh314
#define ll long long
#define pb push_back
#define fio(i,a1,b1) for(int i=a1;i<=b1;i++)
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
int sphenic(int n) {
	int res = 0;
	fio(i, 2, sqrt(n)) {
		int temp = 0;
		while (n % i == 0) {
			temp++;
			n /= i;
		}
		if (temp >= 2) return 0;
		if (temp == 1) res++;
	}
	if (n != 1) res++;
	return res == 3;
}
int main() {
	w(t) {
		int n; cin >> n;

		cout << sphenic(n);
		// if(sphenic(n)) cout<<1;
		// else cout<<0;
		cout << endl;
	}
	return 0;
}
