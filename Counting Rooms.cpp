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


vector<int> g[MAX];
bool visited[MAX];
 
void dfs(int s){
    visited[s]=true;
    for(auto x:g[s]){
        if(!visited[x]) dfs(x);
    }
}
 
void solve(){
    int n, m; cin>>n>>m;
    vector<string> arr(n);
    for(int i=0; i<n; i++) cin>>arr[i];
 
    vector<int> dots;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]=='.'){
                int d=i*m+j;
                dots.push_back(d);
                if(i>0 and arr[i-1][j]=='.') g[d].push_back((i-1)*m+j);
                if(i<n-1 and arr[i+1][j]=='.') g[d].push_back((i+1)*m+j);
                if(j<m-1 and arr[i][j+1]=='.') g[d].push_back(i*m+j+1);
                if(j>0 and arr[i][j-1]=='.') g[d].push_back(i*m+j-1);
            }
        }
    }
 
    int ans=0, k=dots.size();
    for(int i=0; i<k; i++){
        if(!visited[dots[i]]){
            ans++;
            dfs(dots[i]);
        }
    }
    cout<<ans<<endl;
}

int main(){
    fio();
    solve();
    return 0;
}