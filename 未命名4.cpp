#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,a,n) for (int i=a;i<n;i++)
#define per(i,a,n) for (int i=n-1;i>=a;i--)
ll bigmul(int n,ll u,ll v){
	int u1,u2,u3,v1,v2,v3;
	u1=u2=u3=v1=v2=v3=0;
	int temp=1;
	int len=ceil(n*1.0/3.0);
	rep(i,0,len){
		if(u&1){
			u1+=temp;
		}
		u=u>>1;
		temp=temp<<1;
	}
	temp=1;
	rep(i,0,len){
		if(u&1){
			u2+=temp;
		}
		u=u>>1;
		temp=temp<<1;
	}
	u3=u;
	temp=1;
	rep(i,0,len){
		if(v&1){
			v1+=temp;
		}
		v=v>>1;
		temp=temp<<1;
	}
	temp=1;
	rep(i,0,len){
		if(v&1){
			v2+=temp;
		}
		v=v>>1;
		temp=temp<<1;
	}
	v3=v;
	int a,b,c,d,e;
	a=u1*v1;
	b=(u1+u2+u3)*(v1+v2+v3);
	c=(u1-u2+u3)*(v1-v2+v3);
	d=(u1+2*u2+4*u3)*(v1+2*v2+4*v3);
	e=(u1-2*u2+4*u3)*(v1-2*v2+4*v3);
	ll w0,w1,w2,w3,w4;
	w0=a;
	w1=(8*b-8*c-d+e)/12;
	w2=(-30*a+16*b+16*c-d-e)/24;
	w3=(-2*b+2*c+d-e)/24;
	w4=(6*a-4*b-4*c+d+e)/24;
	ll ans;
	ans=w0+w1*(1<<len)+w2*(1<<len*2)+w3*(1<<len*3)+w4*(1<<len*4);
	return ans;
}
int main(){
	//本地测试
	#ifdef ONLINE_JUDGE
	#else
    freopen("C://Users//yan//Desktop//in.txt","r",stdin);
	#endif
	ios::sync_with_stdio(false);//取消同步
	std::cin.tie(0);//解除cin与cout的绑定，进一步加快执行效率。
	cout<<111*121<<endl;
	cout<<bigmul(7,111,121)<<endl;
}



