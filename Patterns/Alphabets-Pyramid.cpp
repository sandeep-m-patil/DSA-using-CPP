#include <iostream>
using namespace std;

int main() {
    int n=5;

    char ch;
    for (int i = 1; i <= n; i++) {
        ch = 'A'; // Starting character for each row
        for (int j = 1; j <= n - i; j++)
            cout << " ";

        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << ch;
            if (j < i)
                ch++;
            else
                ch--;
        }

        cout << endl;
    }

    return 0;
}
