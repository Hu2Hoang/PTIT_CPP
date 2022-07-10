#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)<(b))?(a):(b))
int i, n;
bool isPrime(long long n)
{
	if (n < 2)
		return 0;
	if (n <= 3)
		return 1;
	if (n % 2 == 0 || n % 3 == 0)
		return 0;
	for (long long i = 5; i * i <= n; i = i + 6)
		if (n % i == 0 || n % (i + 2) == 0)
			return 0;

	return 1;
}
int main() {
	w(t) {
		ll n;
		cin>>n;
		int res=0;
		for (long long i = 1; i <= sqrt(n); i++) {
			if (isPrime(i)) res++;
		}
		cout<<res<<endl;
	}

	return 0;
}