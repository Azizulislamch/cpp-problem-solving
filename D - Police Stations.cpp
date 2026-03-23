#include<bits/stdc++.h>
using namespace std;
#define fio() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define TC int tc; cin>>tc; for(int testcase=1; testcase<=tc; testcase++)
#define endl "\n"
#define ll long long
#define ui unsigned int
#define ull unsigned long long
#define pi acos(-1)
#define MAX 300005
#define INF 1e9
#define MOD 998244353
#define BITSCOUNT 32
#define debug(x) cerr << x << endl;
#define setBit(x, i) x  (1LL << i);
#define clearBit(x, i) x & (~(1LL << i));
#define checkBit(x, i) x & (1LL << i);
 
 
void solve(){
    int n, k, d; cin>>n>>k>>d;
    queue<pair<int, int>> q;
    for(int i=0; i<k; i++){
        int p; cin>>p;
        q.push({p, 0});
    }
 
    vector<vector<pair<int, int>>> graph(n+5);
    vector<int> visited(n+5, 0);
    vector<int> res(n+5, 0);
    for(int i=0; i<n-1; i++){
        int u, v; cin>>u>>v;
        graph[u].push_back({v, i+1});
        graph[v].push_back({u, i+1});
    }
 
    while(!q.empty()){
        int pos=q.front().first;
        int from=q.front().second;
        q.pop();
 
        if(visited[pos]) continue;
        visited[pos]=1;
 
        for(auto [nxt, idx]:graph[pos]){
            if(nxt==from) continue;
 
            if(visited[nxt]) res[idx]=1;
            else q.push({nxt, pos});
        }
    }
 
    vector<int> ans;
    for(int i=1; i<=n-1; i++){
        if(res[i]) ans.push_back(i);
    }
    cout<<ans.size()<<endl;
    for(int x:ans) cout<<x<<" ";
    cout<<endl;
}
 
int main(){
    fio();
    solve();
    return 0;
}