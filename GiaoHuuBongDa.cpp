#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;

        vector<vector<int>> dp(x + 1, vector<int>(y + 1, 0));
        dp[0][0] = 1;

        for (int i = 0; i <= x; ++i) {
            for (int j = 0; j <= y; ++j) {
                if (i > j) {
                    if (j > 0) dp[i][j] = (dp[i][j] + dp[i - 1][j - 1]);
                    if (i > 1) dp[i][j] = (dp[i][j] + dp[i - 2][j]);
                }
                if (i < j) {
                    if (i > 0) dp[i][j] = (dp[i][j] + dp[i - 1][j - 1]);
                    if (j > 1) dp[i][j] = (dp[i][j] + dp[i][j - 2]);
                }
            }
        }

        cout << dp[x][y] << endl;
    }

    return 0;
}
