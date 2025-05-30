#include<bits/stdc++.h>
using namespace std;
int dx[4] ={-1,1,-1,1},dy[4]={-1,-1,1,1};
int main(){
    int t;
    cin >> t;
    while(t--){
        long long a,b;
        cin >> a >> b;
        long long x_k,y_k;
        cin >> x_k >> y_k;
        long long x_q,y_q;
        cin >> x_q >> y_q;
        set<pair<int,int>> king_hits,queen_hits;
        for(int i=0;i<4;i++){
            king_hits.insert({x_k+dx[i]*a,y_k+dy[i]*b});
            king_hits.insert({x_k+dx[i]*b,y_k+dy[i]*a});
            queen_hits.insert({x_q+dx[i]*a,y_q+dy[i]*b});
            queen_hits.insert({x_q+dx[i]*b,y_q+dy[i]*a});
        }
        int ans=0;
        for(auto p : king_hits)
            if(queen_hits.find(p) != queen_hits.end())
                ans++;
        cout << ans << endl;

    }
    return 0;
}