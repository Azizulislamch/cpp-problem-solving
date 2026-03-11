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
const int mod=1e9+7;


void solve(){
    int n; cin>>n;
    vector<int>p(n);
    vector<int>color(n);
    vector<int>F(n, 0);
    vector<bool>visited(n, false);
 
    for(int i=0; i<n; i++){
        cin>>p[i];
        p[i]--;
    }
    
    string s; cin>>s;
    for(int i=0; i<n; i++){
        color[i]=(s[i]=='0') ? 1:0;
    }
 
    for(int i=0; i<n; i++){
        if(!visited[i]){
            int current=i;
            vector<int>cycle;
            int black_count=0;
            
            while(!visited[current]){
                visited[current]=true;
                cycle.push_back(current);
                black_count+=color[current];
                current=p[current];
            }
            
            for(int j:cycle){
                F[j]=black_count;
            }
        }
    }
 
    for(int i=0; i<n; i++){
        cout<<F[i]<<" ";
    }
    cout<<endl;
}

int main(){
    fio();
    TC solve();
    return 0;
}