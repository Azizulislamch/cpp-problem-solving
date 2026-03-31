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


int Fn(const string &l, const string &t){
    string st=l+l.substr(0, t.size()-1);
    int cnt=0;
    for(int i=0; i<=st.size()-t.size(); ++i){
        if(st.substr(i, t.size())==t){
            ++cnt;
        }
    }
    return cnt;
}
 
int P(int n, int m, const vector<string> &c){
    string t="1543";
    int cnt=0;
    int sr=0, er=n-1, sc=0, ec=m-1;
    while(sr<=er && sc<=ec){
        string ls;
        for(int j=sc; j<=ec; ++j) ls+=c[sr][j];
        for(int i=sr+1; i<er; ++i)ls+=c[i][ec];
        if(sr<er){
            for(int j=ec; j>=sc; --j) ls+=c[er][j];
        }
        if(sc<ec){
            for(int i=er-1; i>sr; --i) ls+=c[i][sc];
        }
        cnt+=Fn(ls, t);
        ++sr; --er; ++sc; --ec;
    }
    return cnt;
}
 
int main(){
    int t; cin>>t;
    vector<int>res;
    for(int i=0; i<t; ++i){
        int n, m; cin>>n>>m;
        vector<string>S(n);
        for(int j=0; j<n; ++j) cin>>S[j];
        res.push_back(P(n, m, S));
    }
    for(int r:res) cout<<r<< endl;
    return 0;
}