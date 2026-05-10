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
    int n, m;
    cin>>n>>m;
 
    vector<string> s(n);
    for(int i=0; i<n; i++){
        cin>>s[i];
    }
 
    int count=0;
    for(int i=0; i<n-1; i++){
        for(int j=0; j<m-1; j++){
            string s1;
            s1+=s[i][j];
            s1+=s[i][j+1];
            s1+=s[i+1][j];
            s1+=s[i+1][j+1];
            sort(s1.begin(), s1.end());
            if(s1=="acef") count++;
        }
    }
    cout<<count<<endl;
}

int main(){
    fio();
    solve();
    return 0;
}