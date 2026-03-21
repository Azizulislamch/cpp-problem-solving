#include<bits/stdc++.h>
using namespace std;
#define fio() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define TC int tc; cin>>tc; for(int testcase=1; testcase<=tc; testcase++)
#define endl "\n"
#define ll long long
#define ui unsigned int
#define ull unsigned long long
#define pi acos(-1)
#define MAX 1000005
#define INF 1e9
#define MOD 998244353
#define BITSCOUNT 32
#define debug(x) cerr << x << endl;
#define setBit(x, i) x | (1LL << i);
#define clearBit(x, i) x & (~(1LL << i));
#define checkBit(x, i) x & (1LL << i);
 
 
void solve(){
    int n, m; cin>>n>>m;
    vector<int> a(m);
    for(auto& x:a) cin>>x;
    sort(a.begin(), a.end());
 
    vector<int> b;
    for(int i=0; i<m-1; i++){
        b.push_back(a[i+1]-a[i]-1);
    }
    b.push_back(n-a[m-1]+a[0]-1);
 
    sort(b.begin(), b.end(), greater<int>());
 
    int ans=0, day=0;
    for(int i=0; i<b.size(); i++){
        int c=b[i];
        c-=day*2;
        if(c<=0) break;
        if(c==1) ans++;
        else ans+=c-1;
        day+=2;
    }
    cout<<n-ans<<endl;
}
 
int main(){
    fio();
    TC solve();
    return 0;
}