#include<bits/stdc++.h>
using namespace std;
const double PI=acos(-1.0);
typedef long long ll;
#define rep(i,a,n) for (int i=a;i<n;i++)
#define per(i,a,n) for (int i=n-1;i>=a;i--)
#define clr(x) memset(x,0,sizeof(x))
const int INF=0x3f3f3f3f;
const int maxn=100005;
int ne[maxn];
int T[maxn];
int S[maxn];
void kmp_pre(int m,int next[]){
	int i,j;
	j=next[0]= - 1;
	i=0;
	while(i<m){
		while( - 1!=j && x[i]!=x[j])j=next[j];
		next[++i]=++j;
	}
}
int main(){
	//本地测试
	#ifdef ONLINE_JUDGE
	#else
    freopen("C://Users//yan//Desktop//in.txt","r",stdin);
	#endif
	ios::sync_with_stdio(false);//取消同步
	std::cin.tie(0);//解除cin与cout的绑定，进一步加快执行效率。
	int n,k,s;
	cin>>n>>k>>s;
	rep(i,0,n){
		cin>>S[i];
	}
	rep(i,0,k){
		cin>>T[i];
	}
}



