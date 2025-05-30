
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while (t--) {
        int n, p = 0;
        string s;

        cin >> n >> s;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1')
                p++;
        }
        
        cout << n + p* (n - 2) << endl;
    }

    return 0;
}
