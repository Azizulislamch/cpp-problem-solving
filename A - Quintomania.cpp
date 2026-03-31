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


string PM(const vector<int>& notes){
    for(size_t i=1; i<notes.size(); ++i){
        int interval=abs(notes[i]-notes[i-1]);
        if(interval!=5 && interval!=7){
            return "NO";
        }
    }
    return "YES";
}
 
int main(){
    int t; cin>>t;
    vector<string>r;
    for(int i=0; i<t; ++i){
        int n; cin>>n;
        vector<int>notes(n);
        for(int j=0; j<n; ++j){
            cin>>notes[j];
        }
        r.push_back(PM(notes));
    }
 
    for(const string& res:r){
        cout<<res<<endl;
    }
 
    return 0;
}