#include <iostream>
using namespace std;

int main() {
    int l, h, n = 5;
    
    for (l = 1; l <= n; l++) {
        // Print leading spaces
        for (h = 1; h <= n - l; h++)
            cout << "  "; // Two spaces for proper alignment

        // Print increasing numbers
        for (h = 1; h <= l; h++)
            cout << h << " ";

        // Print decreasing numbers
        for (h = l - 1; h >= 1; h--)
            cout << h << " ";

        cout << endl;
    }

    return 0;
}