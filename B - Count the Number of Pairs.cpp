#include <bits/stdc++.h>
using namespace std;
#define fio() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define TC     \
    int tc;    \
    cin >> tc; \
    for (int testcase = 1; testcase <= tc; testcase++)
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
const int mod = 1e9 + 7;

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    ll ans = 0;
    map<char, int> freq;

    for (auto c : s)
    {
        freq[c]++;
    }

    for (char c = 'a'; c <= 'z'; c++)
    {
        int mn = min(freq[c], freq[c - 32]);
        ans += mn;
        freq[c] -= mn;
        freq[c - 32] -= mn;
    }

    for (char c = 'a'; c <= 'z'; c++)
    {
        int add = max(freq[c], freq[c - 32]);
        int mn = min(k, add / 2);
        ans += mn;
        k -= mn;
    }
    cout << ans << endl;
}

int main()
{
    fio();
    TC solve();
    return 0;
}