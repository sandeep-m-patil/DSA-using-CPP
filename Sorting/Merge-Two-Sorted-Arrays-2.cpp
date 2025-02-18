#include <iostream>
using namespace std;

// Function to merge three sorted subarrays into a single sorted subarray
void merge(int temp[], int low, int mid1, int mid2, int high, int a[]) {
    int i = low, j = mid1, k = mid2, l = low;

    // Merge elements from three subarrays
    while ((i < mid1) && (j < mid2) && (k < high)) {
        if (a[i] < a[j]) {
            if (a[i] < a[k])
                temp[l++] = a[i++];
            else
                temp[l++] = a[k++];
        } else {
            if (a[j] < a[k])
                temp[l++] = a[j++];
            else
                temp[l++] = a[k++];
        }
    }

    // Merge remaining elements from the first two subarrays
    while ((i < mid1) && (j < mid2)) {
        if (a[i] < a[j])
            temp[l++] = a[i++];
        else
            temp[l++] = a[j++];
    }

    // Merge remaining elements from the second and third subarrays
    while ((j < mid2) && (k < high)) {
        if (a[j] < a[k])
            temp[l++] = a[j++];
        else
            temp[l++] = a[k++];
    }

    // Merge remaining elements from the first and third subarrays
    while ((i < mid1) && (k < high)) {
        if (a[i] < a[k])
            temp[l++] = a[i++];
        else
            temp[l++] = a[k++];
    }

    // Copy any remaining elements from the first subarray
    while (i < mid1)
        temp[l++] = a[i++];

    // Copy any remaining elements from the second subarray
    while (j < mid2)
        temp[l++] = a[j++];

    // Copy any remaining elements from the third subarray
    while (k < high)
        temp[l++] = a[k++];
}


void mergeSort3WayRec(int temp[], int low, int high, int a[]) {

    if (high - low < 2)
        return;

    // Divide the array into three parts
    int mid1 = low + (high - low) / 3;
    int mid2 = low + 2 * (high - low) / 3;

    // Recursively sort each part
    mergeSort3WayRec(a, low, mid1, temp);
    mergeSort3WayRec(a, mid1, mid2, temp);
    mergeSort3WayRec(a, mid2, high, temp);

    // Merge the three sorted parts
    merge(temp, low, mid1, mid2, high, a);
}

// Main function to perform 3-way merge sort
void mergeSort(int a[], int n) {
    if (n == 0)
        return;

    // Temporary array for sorting
    int* temp = new int[n];

    // Copy the input array to the temporary array
    for (int i = 0; i < n; i++)
        temp[i] = a[i];

    // Call the recursive function
    mergeSort3WayRec(temp, 0, n, a);

    // Copy back the sorted elements into the original array
    for (int i = 0; i < n; i++)
        a[i] = temp[i];

    // Free the allocated memory
    delete[] temp;
}


int main() {
    int n = 10;
    int a[n] = {4, 5, 3, 7, 2, 8, 1, 9, 6, 10};

    cout <<"Before Sorting : ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;

    mergeSort(a, n);

    cout <<"After Sorting  : ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;

    return 0;
}

