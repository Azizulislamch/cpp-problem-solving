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


void decode(const string& b, string& s){
    set<char> sch(b.begin(), b.end());
    string r(sch.begin(), sch.end());
    map<char, char> m;
 
    int l=r.size();
    for(int i=0; i<l; i++) m[r[i]]=r[l-1-i];
 
    s.resize(b.size());
    for(int i=0; i<b.size(); i++) s[i]=m[b[i]];
}
 
int main(){
    fio();
    int t;
    cin>>t;
    vector<string> vs(t);
    for (int i=0; i<t; i++){
        int n;
        string b;
        cin>>n>>b;
        decode(b, vs[i]);
    }
    for(const auto& res:vs){
        cout<<res<<endl;
    }
    return 0;
}