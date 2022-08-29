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
#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)<(b))?(a):(b))

int max(int a,int b){
	if(a>b) return a;
	else return b;
}

#include <bits/stdc++.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
using namespace std;

//Quicksort
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void quicksort(int a[], int left, int right){
	int l=left,r=right;
	int key=a[(l+r)/2];

	while(l<=r){
		while(a[l]<key) l++;
		while(a[r]>key) r--;
		if(l<=r){
			int temp=a[l];
			a[l]=a[r];
			a[r]=temp;
			l++;r--;
		}
	}
	if(left<r) quicksort(a,left,r);
	if(l<right) quicksort(a,l,right);
}

//Sort
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
qsort(arr,n+1,sizeof(int),cmpfunc);
//SNT
int snt(int b){
	int q;
	if(b<2) return 1;
	int tmp=0;
	for( q=2;q<=sqrt(b);q++){
		if(b%q==0){
			tmp++; 
			break;
		}
	}
	if(tmp==0) return 0;
	else return 1;
	return 0;
}
//Nam nhuan
int leapY(int y){
	if(y%4==0)
		if(y%100==0)
			if(y%400==0)
				return 0;
			else return 1;
		else return 0;
	else 1;
}
//So Chinh Phuong
int scp(int p){
	if(sqrt(p)==(int)sqrt(p)) return 0;
	else return 1;
}
//So hoan hao
int shh(int h){
	int res=0;
	for(int i=1;i<=h-1;i++){
		if(h%i==0) res+=i;
	}
	if(res==h) return 0;
	else return 1;
}
//Giai thua
int gt(int t)
{
    int gt = 1;
    for (int g = 2; g <= t; g++)
    {
        gt *= g;
    }
    return gt;
}
//số lượng chữ số của một số nguyên duong
#include <stdio.h>
#include <string.h>
char n[1005];
int main(){
	scanf("%s",n);
	if(n[0]=='-') printf("%d",strlen(n)-1);
	else printf("%d",strlen(n));
	return 0;
}
//To hop chap k cua n
	//n=5,k=2 res =10;
int ckn(int n,int k){
	int th=1;
	for(int i=1;i<=k;i++){
		th=th*n/i;
		n--;
	}
	return th;
}
//(Optimal)Tinh tong cac chu so
Cong don xau
char a[11];
	int sum = 0;
	int t = strlen(a) -1;
	for(int j=0;j<=t;++j) sum += a[j]-48;
//********************************************
long long check(char n[]){
		int sum = 0;
		int t = strlen(n) -1;
		for(int j=0;j<=t;++j) sum += n[j]-48;
		return sum;
}
		char a[11];
		scanf("%s",&a);
		printf("%lld\n",check(a));

//Chu so cuoi cung cua 2^n
int l2n(int n){
	if(n==0) return 1;
	switch(n%4){
		case 0: return 6 ;break;
		case 1: return 2;break;
		case 2: return 4;break;
		case 3: return 8;break;
	}
}
//Tinh dien tich tam giac
float stamgiac(float xa, float ya, float xb, float yb, float xc, float yc)
{
    return 0.5*fabs(xa*yb-xb*ya+xb*yc-xc*yb+xc*ya-xa*yc);
}
//Them phan tu vao mang
	//Tim vi tri them
int timVT(int arr[100005],int n,int x){
	if(x>arr[n]) return n+1;
	for(int i=1;i<=n;i++){
		if(arr[i]>=x){
			return i;
			break;
		}
	}
}
	//Chen pt vao mang
void chen(int arr[10005],int n,int x,int k){
	for(int i=n+1;i>k;i--){
		a[i]=a[i-1];
	}
	a[k]=x;
}
chen(a,n,x,k=timVT(a,n,k));n++;
//Sang nguyen to
int prime[10000005];
void sieve(){
	prime[0]=prime[1]=1;
	for (int i = 0; i <= 1000; ++i)
	{
		if(prime[i]==0){
			for(int j=i*i;j<=1000000;j+=i){
				prime[j]=1;
			}
		}
	}
}
for(int i=1;i<=n;i++){
	if(prime[i]==0) printf("%d ",i);
}


map<ll,short> mps;
void sieve_map(map<ll,short> &mps){
	mps[0]=mps[1]=1;
	for (int i = 0; i <= 1000; ++i)
	{
		if(mps[i]==0){
			for(int j=i*i;j<=1000000;j+=i){
				mps[j]=1;
			}
		}
	}
}

	sieve_map(mps);
//Check so nguyen to
bool snt(long long n)
{
	if (n < 2)
		return false;
	if (n <= 3)
		return true;
	if (n % 2 == 0 || n % 3 == 0)
		return false;
	for (long long i = 5; i * i <= n; i = i + 6)
		if (n % i == 0 || n % (i + 2) == 0)
			return false;

	return true;
}

bool snt(long long q){
	int temp=0;
	if(q<=1) return false;
	for(int i=2;i<=sqrt(q);i++){
		if(q%i==0){
			return false;
		}
	}
	return true;
}
//phan tich thua so nt
void pt(ll n){
	fio(i,2,sqrt(n)+1){
		while(!(n%i)){
			cout<<i<<" ";
			n/=i;
		}
	}
	if(n!=1) cout<<n;
}
//Tim kiem nhi phan
//int vt=binarySearch(a,0,n-1,x);
int bsearch(long long arr[], int l, int r, int x) {
  if (r >= l) {
    int mid = l + (r - l) / 2; 
    if (arr[mid] == x)
      return mid;
    if (arr[mid] > x)
      return bsearch(arr, l, mid - 1, x);
    return bsearch(arr, mid + 1, r, x);
  }
  return -1;
}
//Uoc chung lon naht
long long gcd(long long a, long long b){
	long long x;
	while(b>0){
		x=a%b;
		a=b;
		b=x;
	}
return a;
}
//Boi chung nho nhat
long long lcm(long long d, long long c){
	long long x;
	x=gcd(d,c);
return (d*c)/x;
}
//Kiem tra fibonacci
bool scp(int p){
	if(sqrt(p)==(int)sqrt(p)) return true;
	else return false;
}
bool fibo(int f){
	if(scp(5*f*f+4)||scp(5*f*f-4)) return true;
	else return false;
}
//palindrome
bool palin(int n) {
	int tmp,temp,sum=0;
	temp=n;
	while(n>0){
		tmp=n%10;
		sum=sum*10+tmp;
		n/=10;
	}
	if (temp == sum)
		return true;
	else
		return false;
	return true;
}
//palindrome xau
bool isPalindrome(char str[])
{
    int l = 0;
    int h = strlen(str) - 1;
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            return false;
        }
    }
    return true;
}
bool Palindrome(string n){
	int l=0;
	int r=n.length()-1;
	while(r>l){
		if(n[l++]!=n[r--]){
			return false;
		}
	}
	return true;
}
//Tong cac chu so
int tsum(int m){
	int sum=0;
	while(m!=0){
		sum+=m%10;
		m/=10;
	}
	return sum;
} 
//fibonaci
long long fb[100];
void init(){
	fb[0]=0;
	fb[1]=1;
	for(int i=2;i<=92;i++){
		fb[i]=fb[i-1]+fb[i-2];
	}
}
void tichmatrx(int a[105][105],int b[105][105],int temp[105][105],int m,int n, int p){
	fio(i,0,m){
		fio(j,0,p){
			fio(l,0,n){
				temp[i][j]+=a[i][l]*b[l][j];
			}
		}
	}
}
tichmatrx(a,b,temp,m,n,p);
fio(i,0,m){
	fio(j,0,q){
		printf("%d ",temp[i][j]);
	}
}
printf("%d",temp[i][j]);

#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)<(b))?(a):(b))
int i,j,n;
void chuanHoa(char a[]){
	int leng=strlen(a);
	fio(i,0,leng){
		a[i]=tolower(a[i]);
	}
}
int main(){
	char s[401];
	char a[20][20];
	gets(s);
	chuanHoa(s);
	int n=0;
	char *token=strtok(s, " ");
	while(token!=NULL){
		strcpy(a[n],token);
		n++;
		token=strtok(NULL," ");
	}
	int b[10000]={0},cnt=0;
	fio(i,0,n){
		if(b[i]==0){
			cnt=1;
			fio(j,i+1,n){
				if(strcmp(a[i],a[j])==0){
					cnt++;
					b[j]=1;
				}
				
			}
			printf("%s %d\n",a[i],cnt);
		}
		
	}
	return 0;
}
//Nhap mang khi chua biet so luong phan tu
int n=0,c=0,l=0;
		char kt=' ';
		while(kt!='\n'){
			int x;cin>>x;
			n++;
			if(x%2==1) l++;
			else c++;
			kt=getchar();
		}
char kt=' ';
	int n=0;
	string s;
	while(cin>>s){
		if(s=="1") continue;
		if(Palindrome(s)==true){
			n++;
			mp[s]++;
		}
		kt=getchar();
	}
stringstream ss(s1);
		string tok;
		while(ss>>tok){
			ss1.insert(tok);
		}
if(a&1) check so le
for(auto &x:vi)

/Duyet map
for(auto x:mp){
	cout<<x.first<<' '<<x.second<<endl;
}
/Duyet map nguoc
for(auto it=mp.rbegin();it!=mp.rend();it++){
	cout<<it->first<<' '<<it->second<<endl;
}

struct cmp{
	bool operator()(const string&a,const string&b) const{
		return a.length()>b.length();
	}
};
map<string,int,cmp> mp;

auto start = high_resolution_clock::now();
// Function
auto stop = high_resolution_clock::now();
auto duration = duration_cast<microseconds>(stop - start);
cout<<' '<< duration.count() <<"micro_sec" << endl;