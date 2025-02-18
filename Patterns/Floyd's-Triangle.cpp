#include <iostream>
using namespace std;

int main() {

    int n=4, c = 1;

    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= i; ++j) {
            cout << c << " ";
            ++c;
        }

        cout << endl;
    }

    return 0;
}