#include <iostream>
using namespace std;

int main() {
    int n=8;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int num = min(min(i, j), min(n - i - 1, n - j - 1)) + 1;
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
