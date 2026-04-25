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
    int k;
    string s;
    cin>>k>>s;
 
    int n=s.length();
    if(n%k){
        cout<<-1<<endl;
        return;
    }
 
    unordered_map<char, int> freq;
    for(char c:s){
        freq[c]++;
    }
 
    string s1="";
    for(auto it:freq){
        if(it.second%k){
            cout<<-1<<endl;
            return;
        }
        s1+=string(it.second/k, it.first);
    }
 
    string ans="";
    for(int i=0; i<k; i++){
        ans+=s1;
    }
 
    cout<<ans<<endl;

}

int main(){
    fio();
    solve();
    return 0;
}