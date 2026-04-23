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
    int n, k;
    cin>>n>>k;
    string s; cin>>s;
 
    unordered_map<char, int> mp;
    int m=0;
    for(char ch='a'; ch<='z'; ch++){
        int cnt=0;
        int l=0;
        for(int i=0; i<n; i++){
            if(s[i]==ch){
                cnt++;
                if(cnt==k){
                    l++;
                    cnt=0;
                }
            }else{
                cnt=0;
            }
        }
        m=max(m, l);
    }
    cout<<m<<endl;
}

int main(){
    fio();
    solve();
    return 0;
}