#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while (t--) {
        long long n, x;
        cin >> n >> x;

        if (x == n) {
            for (long long i = 0; i < n; i++)
                cout << i << " ";
            cout << endl;
            continue;
        }

        for (long long i = 0; i < x; i++)
            cout << i << " ";
        
        for (long long i = x + 1; i < n; i++)
            cout << i << " ";
        
        cout << x << endl;
    }

    return 0;
}