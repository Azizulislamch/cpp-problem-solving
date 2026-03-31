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


ll F(int n, int k, const vector<pair<int, int>>& b){
    unordered_map<int, vector<int>>m;
    for (const auto& p:b) {
        int x=p.first;
        int y=p.second;
        m[x].push_back(y);
    }
    vector<ll> a;
    for(auto& e:m){
        vector<int>& c=e.second;
        sort(c.rbegin(), c.rend());
        ll s=0;
        for(int v:c){
            s+=v;
        }
        a.push_back(s);
    }
 
    sort(a.rbegin(), a.rend());
    ll p=0;
    for(int i=0; i<min(n, (int)a.size()); ++i){
        p+=a[i];
    }
    return p;
}
 
int main(){
    int t; cin>>t;
    vector<ll>r;
 
    while(t--){
        int n, k; cin>>n>>k;
        vector<pair<int, int>> b(k);
        for(int i=0; i<k; ++i){
            cin>>b[i].first>>b[i].second;
        }
        r.push_back(F(n, k, b));
    }
 
    for(ll ans:r) cout<<ans<<endl;
 
    return 0;
}