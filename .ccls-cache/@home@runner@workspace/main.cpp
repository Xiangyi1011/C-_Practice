#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    bool sol = false; // 用來判斷是否有任何條件成立

    if (!(cin >> a >> b >> c)) return 0; // 讀取輸入

    // AND 邏輯
    if ((a && b) == c) {
        cout << "and" << endl;
        sol = true;
    }
    // OR 邏輯
    if ((a || b) == c) {
        cout << "or" << endl;
        sol = true;
    }
    // XOR 邏輯
    if (((a && !b) || (!a && b)) == c) {
        cout << "xor" << endl;
        sol = true;
    }

    // 如果都沒有成立的條件
    if (!sol) {
        cout << "impossible" << endl;
    }

    return 0;
}