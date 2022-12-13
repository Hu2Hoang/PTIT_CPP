#include<bits/stdc++.h>
using namespace std;

int prime[10000001];
void sieve(){
	for(int i=0; i<10000001;i++) prime[i]=1;
	prime[0] = prime[1] = 0;
	for(int i=2;i<=1000;i++){
		if(prime[i]){
			for(int j=i*i;j<=1000001;j+=i){
				prime[j]=0;
			}
		}
	}
}
int F[1000001];
int main(){
	sieve();
	int n;cin>>n;
	F[0]=F[1]=0;
	int cnt=0;
	for(int i=2;i<=100;i++){
		if(prime[i]) cnt++;
		F[i]=cnt;
	}
	while(n--){
		int l,r;
		cin>>l>>r;
		if(l==0) cout<<F[r]<<endl;
		else cout<<F[r]-F[l-1]<<endl;
	}
	return 0;
}

Biết là lời xin lỗi cũng không thay đổi được quá khứ cũng thể làm cho ảnh tự quay về
Nhưng vẫn muốn gửi tới TTT và BTC 1 lời xin lỗi
 
Là 1 thành viên trong team media, HĐ lẽ ra phải chú ý và cẩn thận hơn
khi chụp ảnh trong trong thời gian diễn ra hôm sự kiện. Nhưng
HĐ đã sao nhãng và làm mất sự chú ý của mình và khiến cho 
ảnh của nhà tài trợ coolmate gặp vấn đề. HĐ biết điều đó sẽ gây ảnh hưởng tới BTC
và các anh chị core-team. Rất xin lỗi TTT về mọi thứ vì đã không làm tròn trách
nhiệm trong hôm diễn ra sự kiện. 