// C++ program to merge two sorted arrays a[] and b[]
// without extra space using n-th smallest number

#include <algorithm>
#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

// Find m-th smallest element
// Do a binary search in a[] to find the right index idx
// in a[] such that all combined elements in a[idx..m-1]
// and b[m-idx...n-1] are greater than or equal to all
// the remaining elements (a[0..idx-1] and b[m-idx-1..n-1])
// in both the arrays.
int kthSmallest(vector<int> &a, vector<int> &b, int k) {
    int n = a.size(), m = b.size();
    int lo = 0, hi = n, idx = 0;
    while (lo <= hi) {
        int mid1 = (lo + hi) / 2;
        int mid2 = k - mid1;
       
        // We don't have mid2 elements in b[], so pick more
        // elements from a[]
        if (mid2 > m) {
            lo = mid1 + 1;
            continue;
        }

        // Find elements to the left and right of partition in a[]
        int l1 = (mid1 == 0 ? INT_MIN : a[mid1 - 1]);
        int r1 = (mid1 == n ? INT_MAX : a[mid1]);

        // Find elements to the left and right of partition in b[]
        int l2 = (mid2 == 0 ? INT_MIN : b[mid2 - 1]);
        int r2 = (mid2 == m ? INT_MAX : b[mid2]);

        // If it is a valid partition
        if (l1 <= r2 && l2 <= r1) {
            idx = mid1;
            break;
        }

        // Check if we need to take lesser elements from a[]
        if (l1 > r2)
            hi = mid1 - 1;

        // Check if we need to take more elements from a[]
        else
            lo = mid1 + 1;
    }
    return idx;
}

void mergeArrays(vector<int> &a, vector<int> &b) {
    int n = a.size();
    int m = b.size();
    int idx = kthSmallest(a, b, n);

    // Move all smaller elements in a[]
    for (int i = idx; i < n; i++) {
        swap(a[i], b[i - idx]);
    }

    // Sort both a[] and b[]
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
}

int main() {
    vector<int> a = {1, 5, 9, 10, 15, 20};
    vector<int> b = {2, 3, 8, 13};
    mergeArrays(a, b);

    for (int ele : a)
        cout << ele << " ";
    cout << "\n";
    for (int ele : b)
        cout << ele << " ";
    return 0;
} 