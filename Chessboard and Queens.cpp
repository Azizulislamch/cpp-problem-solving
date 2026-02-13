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
const int N=8;
vector<string> board(N);
int total=0;
 
bool col[N], diag1[2*N], diag2[2*N];
 
void backtrack(int row){
    if(row == N){
        total++;
        return;
    }
 
    for(int c=0; c<N; c++){
        if(board[row][c]=='*') continue;
        if(col[c] || diag1[row+c] || diag2[row-c+N]) continue;
 
        col[c]=true;
        diag1[row+c]=true;
        diag2[row-c+N]=true;
        
        backtrack(row+1);
        
        col[c]=false;
        diag1[row+c]=false;
        diag2[row-c+N]=false;
    }
}
 
int main(){
    fio();
    for(int i=0; i<N; i++) cin>>board[i];
    backtrack(0);
    cout<<total<<endl;
    return 0;
}