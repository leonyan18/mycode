<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
const double PI=acos(-1.0);
typedef long long ll;
#define rep(i,a,n) for (int i=a;i<n;i++)
#define per(i,a,n) for (int i=n-1;i>=a;i--)
#define clr(x) memset(x,0,sizeof(x))
const int INF=0x3f3f3f3f;
const int maxn=1e5+5;
=======
#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<queue>
#include<climits>
using namespace std;
 
>>>>>>> b1248014028b5e7ade72c8fb6be440bc9e14383e
#define N 16
int capacity[N][N];//容量
int flow[N];//残余流量
int pre[N];//前趋
 
int n, m;
queue<int> Q;
 
int BFS(int src, int des) {
    //初始化
    while (!Q.empty()) {
        Q.pop();
    }
    for (int i = 1; i < n + 1; i++) {
        pre[i] = -1;
    }
    pre[src] = 0;
    flow[src] = INT_MAX;//初始化源点的流量为无穷大 
    Q.push(src);
    while (!Q.empty()) {
        int index = Q.front();
        Q.pop();
        if (index == des) {//找到了增广路径 
            break;
        }
        for (int i = 1; i < n + 1; i++) {
<<<<<<< HEAD
            if (i != src && capacity[index][i] > 0 && pre[i] == -1) {//前驱不是-1 
                pre[i] = index;//节点前驱 
                //增广路残容流量
                flow[i] = min(capacity[index][i], flow[index]);//流量取小的 
=======
            if (i != src && capacity[index][i] > 0 && pre[i] == -1) {
                pre[i] = index;
                //增广路残容流量
                flow[i] = min(capacity[index][i], flow[index]);
>>>>>>> b1248014028b5e7ade72c8fb6be440bc9e14383e
                Q.push(i);
            }
        }
    }//while
    if (pre[des] == -1) {
        return -1;  //残留图中不存在增广路径
    } else {
        return flow[des];
    }
}
 
int MaxFlow(int src, int des) {
        int aug = 0;
        int sumflow = 0;
        while ((aug = BFS (src, des)) != -1) {
            int k = des;  //利用前驱寻找路径 
            while (k != src) {
                int last = pre[k];
<<<<<<< HEAD
                capacity[last][k] -= aug;//正向流量 
                capacity[k][last] += aug;//逆向流量 
=======
                capacity[last][k] -= aug;
                capacity[k][last] += aug;
>>>>>>> b1248014028b5e7ade72c8fb6be440bc9e14383e
                k = last;
            }
            sumflow += aug;
        }
        return sumflow;
}
             
int main() {
<<<<<<< HEAD
	#ifdef ONLINE_JUDGE
	#else
    freopen("C://Users//11835//Desktop//in.txt","r",stdin);
	#endif
=======
>>>>>>> b1248014028b5e7ade72c8fb6be440bc9e14383e
    int cas, cases = 1;
    scanf("%d", &cas);
    while (cas--) {
        scanf("%d%d", &n, &m);
        memset(capacity, 0, sizeof(capacity));
        memset(flow, 0, sizeof(flow));
        for (int i = 0; i < m; i++) {
            int u, v, w;
            scanf("%d%d%d", &u, &v, &w);
            if (u == v) {//起点终点相同
                continue;
            }
            capacity[u][v] += w;
        }
        printf("Case %d: ", cases++);
        printf("%d\n", MaxFlow(1, n));
    }
    return 0;
}
