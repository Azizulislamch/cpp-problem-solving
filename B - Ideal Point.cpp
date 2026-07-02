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
    vector<int> gain(100, 0);
    for (int i = 1; i <= n; i++)
    {
        int l, r;
        cin >> l >> r;
        if (l <= k && r >= k)
        {
            gain[l]++;
            gain[r + 1]--;
        }
    }
    for (int i = 1; i <= 51; i++)
    {
        gain[i] += gain[i - 1];
    }
    if (gain[k] > gain[k - 1] && gain[k] > gain[k + 1])
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    fio();
    TC solve();
    return 0;
}