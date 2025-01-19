#include <iostream>
#include <vector>
using namespace std;

// Merge function that counts inversions during merging
int mergeAndCount(vector<int>& arr, int left, int mid, int right) {
    int i = left;      // Pointer for left subarray
    int j = mid + 1;   // Pointer for right subarray
    int k = 0;         // Pointer for temporary array
    int inversions = 0;

    vector<int> temp(right - left + 1); // Temporary array for merged elements

    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
            // All remaining elements in the left subarray are inversions
            inversions += (mid - i + 1);
        }
    }

    // Copy remaining elements from the left subarray
    while (i <= mid) {
        temp[k++] = arr[i++];
    }

    // Copy remaining elements from the right subarray
    while (j <= right) {
        temp[k++] = arr[j++];
    }

    // Copy merged elements back into the original array
    for (int i = left, k = 0; i <= right; ++i, ++k) {
        arr[i] = temp[k];
    }

    return inversions;
}

// Merge Sort function that counts inversions
int mergeSortAndCount(vector<int>& arr, int left, int right) {
    int inversions = 0;

    if (left < right) {
        int mid = left + (right - left) / 2;

        // Count inversions in the left half
        inversions += mergeSortAndCount(arr, left, mid);

        // Count inversions in the right half
        inversions += mergeSortAndCount(arr, mid + 1, right);

        // Count cross-inversions during the merge step
        inversions += mergeAndCount(arr, left, mid, right);
    }

    return inversions;
}

int main() {
    vector<int> arr = {8, 4, 2, 1};
    cout << "Original array: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    int inversionCount = mergeSortAndCount(arr, 0, arr.size() - 1);

    cout << "Sorted array: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    cout << "Inversion Count: " << inversionCount << endl;
    return 0;
}
