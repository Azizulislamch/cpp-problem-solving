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


set<long long> prevVals(long long cur) {
    set<long long> p;
    p.insert(cur * 2);
    if ((cur - 1) % 3 == 0) {
        long long c = (cur - 1) / 3;
        if (c > 0 && c % 2 == 1) {
            p.insert(c);
        }
    }
    return p;
}
 
bool check(long long a, long long b, int k) {
    long long cur = a;
    for (int i = 0; i < k; i++) {
        if (cur % 2 == 0) cur /= 2;
        else cur = 3 * cur + 1;
 
        if (i < k - 1 && cur == b) return false;
    }
    return cur == b;
}
 
long long solve(int k, long long y) {
    set<long long> cur = {y};
    for (int i = 0; i < k; i++) {
        set<long long> nxt;
        for (long long v : cur) {
            set<long long> p = prevVals(v);
            nxt.insert(p.begin(), p.end());
        }
        cur = nxt;
    }
 
    vector<long long> cand(cur.begin(), cur.end());
    for (long long v : cand) {
        if (v == 21 && check(v, y, k)) return v;
    }
    for (long long v : cand) {
        if (check(v, y, k)) return v;
    }
    return cand[0];
}

void solve(){
    int k; long long x;
    cin >> k >> x;
    cout << solve(k, x) << endl;
}

int main(){
    fio();
    TC solve();
    return 0;
}