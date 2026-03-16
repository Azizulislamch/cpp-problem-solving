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
#define MAX 1000005
#define INF 1e9
#define MOD 998244353
#define BITSCOUNT 32
#define debug(x) cerr << x << endl;
#define setBit(x, i) ((x) | (1LL << (i)))
#define clearBit(x, i) ((x) & (~(1LL << (i))))
#define checkBit(x, i) ((x) & (1LL << (i)))
 
vector<int> graph[MAX];
bool visited[MAX];
vector<int> color(MAX);
void dfs(int s, int col){
    if(col==0) color[s]=1;
    else color[s]=0;
 
    visited[s]=true;
    for(int nxt:graph[s]){
        if(!visited[nxt]) dfs(nxt, color[s]);
    }
}
 
int main(){
    fio();
    int n; cin>>n;
    for(int i=0; i<n-1; i++){
        int u, v; cin>>u>>v;
        u--, v--;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
 
    dfs(0, 1);
 
    ll cnt=0, cnt1=0;
    for(int i=0; i<n; i++){
        if(color[i]) cnt++;
        else cnt1++;
    }
 
    cout<<cnt*cnt1-(n-1)<<endl;
    return 0;
}