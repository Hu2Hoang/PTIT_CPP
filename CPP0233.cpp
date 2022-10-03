#include<bits/stdc++.h>
using namespace std;
//Code designed by https://linktr.ee/hu2hoang
#define pb push_back
#define ll long long
#define fio(i,a1,b1) for(int i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
#define exps(vs) for(auto x:vs) cout<<x<<' ';
#define imps(vs) vector<string> vs; fio(i,0,n){ string x;cin>>x; vs.push_back(x); }
#define exp(vi) for(int x:vi) cout<<x<<' ';
#define imp(vi) vector<int> vi; fio(i,0,n){int x;cin>>x;vi.push_back(x);}
#define sovi(vi) sort(vi.begin(),vi.end())
#define mcd(n) vector<int> mcd(n); partial_sum(vi.begin(),vi.end(),mcd.begin());//mcd[r-1]-mcd[l-2]
int main(){
    w(t){
        int n,m,k;
        cin>>n>>m;
        int a[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        vector<int> vi;
        int d=0;
        int up=0,left=0;
        int down=n-1,right=m-1;
        while(1){
            //hang ngang tren
            for(int i=left;i<=right;i++){
                vi.pb(a[up][i]);
                d++;
            }
            up++;//xuong hang tiep theo
            if(d==n*m) break;
            for(int i=up;i<=down;i++){
                vi.pb(a[i][right]);
                d++;
            }
            right--;
            if(d==n*m) break;
            for(int i=right;i>=left;i--){
                vi.pb(a[down][i]);
                d++;
            }
            down--;
            if(d==n*m) break;
            for(int i=down;i>=up;i--){
                vi.pb(a[i][left]);
                d++;
            }
            left++;
            if(d==n*m) break;
        }
        reverse(vi.begin(),vi.end());
        exp(vi);
        cout<<endl;
    }
    return 0;
}
