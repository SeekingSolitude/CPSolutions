#include <bits/stdc++.h>
using namespace std;

int main() {
    int matrix[5][5];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
        }
    }
    int row, col;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matrix[i][j] == 1) {
                row = i;
                col = j;
                break;
            }
        }
    }
    int moves = abs(row-2) + abs(col-2);
    cout << moves << '\n';
    return 0;
}