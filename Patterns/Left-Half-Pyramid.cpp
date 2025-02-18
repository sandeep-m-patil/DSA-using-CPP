#include <iostream>
using namespace std;

int main()
{
    int l,h,n = 5;
    for (l = n; l > 0; l--) {
        for (h = 1; h <= n; h++)
        {
            if (h >= l)cout << "* ";
            else cout << "  ";
        }
        cout << endl;
    }
    return 0;
}