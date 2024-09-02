#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool arraySortedOrNot(int arr[], int n) {
        // Iterate through each element
        for (int i = 0; i < n - 1; ++i) {
            
            // Compare with every subsequent element
            for (int j = i+1; j < n; ++j) {
                
                // If any element is out of order, return false
                if (arr[i] > arr[j]) {
                    return false;
                }
            }
        }
        // All elements are in order
        return true;
    }
};

// Driver code
int main() {
    // Creating an instance of solution class
    Solution solution;
    
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};
    
    // Function call to check if the array is sorted 
    bool sorted = solution.arraySortedOrNot(arr, n);
    if (sorted) {
        cout << "Array is sorted." << endl;
    } else {
        cout << "Array is not sorted." << endl;
    }
    return 0;
}
