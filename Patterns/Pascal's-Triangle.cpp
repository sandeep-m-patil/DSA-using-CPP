#include <iostream>
using namespace std;

int main() {
    int n=5;

    for (int line = 0; line < n; line++) {
        for (int space = 0; space < n - line - 1; space++)
            cout << "  ";

        int num = 1;
        for (int i = 0; i <= line; i++) {
            cout << num << "   ";
            num = num * (line - i) / (i + 1);
        }
        cout << endl;
    }
    
    return 0;
}
