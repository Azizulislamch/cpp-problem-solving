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


int solve(vector<int>& a, vector<int>& b, int n, int m, int k){
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
 
    int i=0, j=0, ans=0;
    while(i<n and j<m){
        if(abs(a[i]-b[j])<=k){
            ans++;
            i++;
            j++;
        }
        else if(a[i]<b[j]) i++;
        else j++;
    }
    return ans;
}
 
int main(){
    fio();
    int n, m, k; cin>>n>>m>>k;
    vector<int>a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    vector<int>b(m);
    for(int i=0; i<m; i++) cin>>b[i];
    cout<<solve(a, b, n, m, k)<<endl;
    return 0;
}