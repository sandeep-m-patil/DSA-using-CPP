#include <iostream>
using namespace std;
int main() {
    int (*p)[2];
    int a[6]={10,20,30,40,50,60};
    p=&a[0];
    cout<<(*p)[0]<<" ";
    p=p+1;
    p=p+1;
    cout<<(*p)[1]<<" ";
    return 0;
}
