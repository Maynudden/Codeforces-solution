#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> v(n);

        for (long long& val : v)
            cin >> val;

        int cnt = 0;
        for (int i = 0; i < n; i++) {
            int j = i;
            while (j + 1 < n && v[j + 1] == v[i])
                j++;
            if ((i == 0 || v[i - 1] < v[i]) && (j == n - 1 || v[j + 1] < v[i]))
                cnt++;
            i = j;
        }
        cout << cnt << endl;
    }

    return 0;
}
