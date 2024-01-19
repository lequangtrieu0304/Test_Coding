#include <iostream>
using namespace std;

int main() {
    int m, d, k, c;
    cin >> m >> d >> k >> c;

    if (k > d) {
        cout << "-1" << endl;
        return 0;
    }

    int totalGold = 0;
    int currentDurability = d;

    for (int i = 0; i < m; i++) {
        if (currentDurability < k) {
            totalGold += c;
            currentDurability = d;
        }
        currentDurability -= k;
    }

    if (currentDurability < 0) {
        cout << "-1" << endl;
    } else {
        cout << totalGold << endl;
    }

    return 0;
}
