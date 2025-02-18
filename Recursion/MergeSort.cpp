#include <iostream>
using namespace std;

void merge(int a[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    // Copy data to temp arrays L[] and R[]
    for (i = 0; i < n1; i++)
        L[i] = a[l + i];
    for (j = 0; j < n2; j++)
        R[j] = a[m + 1 + j];

    i=0;
	j=0;
	k=l;
	
    while (i < n1 && j < n2) {
        if (L[i] <= R[j])a[k++] = L[i++];
        else  a[k++] = R[j++];
    }


    while (i < n1) {
        a[k++] = L[i++];
    }

    while (j < n2) {
        a[k++] = R[j++];
    }
}

void mergesort(int a[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
		       
        mergesort(a, l, m);
        mergesort(a, m + 1, r);
        
        merge(a, l, m, r);
    }
}

int main() {
    int n, i;
    cin >> n;
    int a[n];

    for (i = 0; i < n; i++) cin >> a[i];

    mergesort(a, 0, n - 1);

    for (i = 0; i < n; i++) cout << a[i] << " ";

    return 0;
}
