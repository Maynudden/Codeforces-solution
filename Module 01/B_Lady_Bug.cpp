#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    string a,b;
    cin >> a >> b;
    int f1=0,f2=0;
    for(int i=0;i<n;i++){
        if(i%2){
            if(a[i] == '1')
                f2--;
            if(b[i] == '0')
                f1++;
        }else{
            if(a[i] == '1')
                f1--;
            if(b[i] == '0')
                f2++;
        }
    }
    if(f1>=0 && f2>=0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}