#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n; cin >> n;
        int odd = 0, even = 0;
        for (int i = 0; i < n; i++) {
            int a; cin >> a;
            if (a%2 != i%2) {
                if (i%2==0) {
                    odd++;
                } else {
                    even++;
                }
            } 
        }
        if (odd != even) {
            cout << -1 << '\n';
        } else {
            cout << odd << '\n';
        }
    }
    return 0;
}