// Programe to find the diamaeter of a graph
// Diameter is the longest path in a graph

#include <bits/stdc++.h>
using namespace std;

#define LL long long
#define fastio          std::ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define REP(i,n)        for(__typeof(n) i=0; i<n; ++i)
#define CREP(i,n)       for(__typeof(n) i=n-1; i>=0; --i)
#define MYREP(i,a,b)    for(__typeof(a) i=a; i<=b; ++i)
#define MYCREP(i,a,b)   for(__typeof(a) i=b; i>=a; --i)
#define SET(a, b)       memset(a, b, sizeof(a))
#define pb              push_back

LL MOD = 998244353;
const int N = 1e5 + 5;
vector<int> g[N];
int dp1[100005],dp2[100005];

void dfs(int s, int par){
	int sum1 = 0, sum2 = 0;
	
	for(auto x: g[s]){
		if(x == par)	continue;
		dfs(x,s);
		sum1 += dp2[x];
		sum2 += max(dp2[x],dp1[x]);
	}
	dp1[s] = s + sum1;
	dp2[s] = sum2;
}

int f[N],gs[N],diameter;

void dfs2(int s,int par){
	
	int ans = 0;
	for(auto x: g[s]){
		if(x == par)	continue;
		dfs2(x,s);
		ans = max(ans, 1 + f[x]);
	}
	f[s] = ans;
}

//pV is parent of node V
void dfs1(int V, int pV){
    //this vector will store f for all children of V
    vector<int> fValues;

    //traverse over all children
    for(auto v: g[V]){
    if(v == pV) continue;
    dfs(v, V);
    fValues.push_back(f[v]);
    }

    //sort to get top two values
    //you can also get top two values without sorting(think about it) in O(n)
    //current complexity is n log n
    sort(fValues.begin(),fValues.end());

    //update f for current node
    f[V] = 0;
    if(!fValues.empty()) f[V] = 1 + fValues.back();

    if(fValues.size()>=2)
         gs[V] = 2 + fValues.back() + fValues[fValues.size()-2];

    diameter = max(diameter, max(f[V], gs[V]));
}

int main(){

	int n,m;
	cin>>n>>m;

	while(m--){
		int x,y;cin>>x>>y;g[x].pb(y),g[y].pb(x);
	}

	dfs2(1,0);
	dfs1(1,0);
	cout<<"It is f[v]: \n";
	MYREP(i,1,n){
		cout<<f[i]<<" ";
	}
	cout<<"Now it is gs[v]";

	MYREP(i,1,n){
		cout<<gs[i]<<" ";
	}

}
/*
5 4
1 2
1 3
2 4
2 5
*/
