#include<bits/stdc++.h>
using namespace std;
#define fio() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define TC int tc; cin>>tc; for(int testcase=1; testcase<=tc; testcase++)
#define endl "\n"
#define ll long long
#define ld long double
#define ui unsigned int
#define ull unsigned long long
#define pb push_back
#define pi acos(-1)
#define MAX 1000005
#define INF 1e9
#define MOD 998244353
#define BITSCOUNT 32
#define debug(x) cerr << x << endl;
#define setBit(x, i) ((x) | (1LL << (i)))
#define clearBit(x, i) ((x) & (~(1LL << (i))))
#define checkBit(x, i) ((x) & (1LL << (i)))
 
 
void solve(){
    int n, k; cin>>n>>k;
    vector<vector<int>> g(n+1);
    for(int i=0; i<n-1; i++){
        int u, v; cin>>u>>v;
        g[u].pb(v);
        g[v].pb(u);
    }
    vector<int> parent(n+1, 0), sz(n+1, 0);
    parent[1]=0;
    vector<int> order;
    order.reserve(n);
    stack<int> st;
    st.push(1);
    parent[1]=-1;
    while(!st.empty()){
        int u=st.top();
        st.pop();
        order.push_back(u);
        for(int v:g[u]){
            if(v==parent[u]) continue;
            parent[v]=u;
            st.push(v);
        }
    }
 
    for(int i=n-1; i>=0; i--){
        int u=order[i];
        sz[u]=1;
        for(int v:g[u]) if(v!=parent[u]) sz[u]+=sz[v];
    }
 
    ll ans=0;
    for(int v=1; v<=n; v++){
        ll cnt=0;
        for(int u:g[v]){
            ll comp_v;
            if(parent[v]==u) comp_v=sz[v];
            else if(parent[u]==v) comp_v=(ll)(n-sz[u]);
            else comp_v=0;
 
            if(comp_v>=k) cnt+=(n-comp_v);
        }
        if(n>=k) cnt+=1;
        ans+=cnt;
    }
 
    cout<<ans<<endl;
}
 
int main(){
    fio();
    TC solve();
    return 0;
}