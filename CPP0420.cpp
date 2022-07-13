#include<bits/stdc++.h>
using namespace std;
//Code designed by https://linktr.ee/hoangdinh314
#define ll long long
#define fio(i,a1,b1) for(int i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
#define tolower(str) transform(str.begin(),str.end(),str.begin(),::tolower);
#define toupper(str) transform(str.begin(),str.end(),str.begin(),::toupper);
#define exps(vs) for(auto x:vs) cout<<x<<' ';
#define imp(vi) vector<int> vi; fio(i,0,n){int x;cin>>x;vi.push_back(x);}
#define exp(vi) for(int x:vi) cout<<x<<' ';
#define sovi(vi) sort(vi.begin(),vi.end())
#define mcd(n) vector<int> mcd(n); partial_sum(vi.begin(),vi.end(),mcd.begin());//mcd[r-1]-mcd[l-2]
#define mav(vi) *max_element(vi.begin(),vi.end())
#define acm(vi) accumulate(vi.begin(),vi.end(),0)
int k;
bool cmp(int a,int b){
	return abs(k-a)<abs(k-b);
}
int main(){
	w(t){
		int n; cin>>n>>k;
		imp(vi);
		stable_sort(vi.begin(),vi.end(),cmp);
		exp(vi);
		cout<<endl;
	}
	return 0;
}
// #include<bits/stdc++.h>
// using namespace std;
// //Code designed by https://linktr.ee/hoangdinh314
// #define ll long long
// #define fio(i,a1,b1) for(int i=a1;i<b1;i++)
// #define w(t) int t;scanf("%d",&t);while(t--)
// #define tolower(str) transform(str.begin(),str.end(),str.begin(),::tolower);
// #define toupper(str) transform(str.begin(),str.end(),str.begin(),::toupper);
// #define exps(vs) for(auto x:vs) cout<<x<<' ';
// #define imp(vi) vector<int> vi; fio(i,0,n){int x;cin>>x;vi.push_back(x);}
// #define exp(vi) for(int x:vi) cout<<x<<' ';
// #define sovi(vi) sort(vi.begin(),vi.end())
// #define mcd(n) vector<int> mcd(n); partial_sum(vi.begin(),vi.end(),mcd.begin());//mcd[r-1]-mcd[l-2]
// #define mav(vi) *max_element(vi.begin(),vi.end())
// #define acm(vi) accumulate(vi.begin(),vi.end(),0)
// bool sortbysecdesc(const pair<int,int> &a, const pair<int,int> &b)
// {
//        return a.second<b.second;
// }
// int main(){
// 	w(t){
// 		int n,k;cin>>n>>k;
// 		vector<pair<int,int>> vp;
// 		fio(i,0,n){
// 			int x;cin>>x;
// 			vp.push_back(make_pair(x,abs(k-x)));
// 		}
// 		stable_sort(vp.begin(),vp.end(),sortbysecdesc);
// 		fio(i,0,n){
// 			cout<<vp[i].first<<" ";
// 		}
// 		cout<<endl;
// 	}
// 	return 0;
// }
