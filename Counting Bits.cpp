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
    ll n;
    cin >> n;
    ll total_ones = 0;
    for (int i = 0; i < 60; i++) {
        ll full_block_size = 1LL << (i + 1);
        ll ones_in_full_block = 1LL << i;
        ll full_blocks = (n + 1) / full_block_size;
        total_ones += full_blocks * ones_in_full_block;
        ll remainder = (n + 1) % full_block_size;
        total_ones += max(0LL, remainder - ones_in_full_block);
    }
    cout << total_ones << endl;
}

int main(){
    fio();
    solve();
    return 0;
}