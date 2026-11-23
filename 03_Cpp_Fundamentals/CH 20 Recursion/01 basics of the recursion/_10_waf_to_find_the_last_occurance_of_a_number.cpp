// waf to find the last occurance of an element in a vector
#include <iostream>
#include <vector>
using namespace std;

// First occurrence function (Image mein jo dikh raha hai usko complete kiya hai)
int firstOccur(vector<int> arr, int target, int i) {
    // Base Case: agar index array ke size ke barabar ho jaye
    if (i >= arr.size()) {
        return -1;
    }
    // Agar target mil gaya
    if (arr[i] == target) {
        return i;
    }
    // Aage check karo
    return firstOccur(arr, target, i + 1);
}

// Last occurrence function (Jisko complete karna tha)
int lastOccur(vector<int> arr, int target, int i) {
    // Base Case: agar index array ke end tak pahunch jaye
    if (i >= arr.size()) {
        return -1;
    }

    // Pehle recursion se end tak jao
    int idxFound = lastOccur(arr, target, i + 1);

    // Backtracking: Agar aage target nahi mila (idxFound == -1)
    // toh current element check karo
    if (idxFound == -1) {
        if (arr[i] == target) {
            return i; // <--- Yahan return i; missing tha
        }
    }

    // Jo bhi index mila hai (ya -1) return karo
    return idxFound;
}

int main() {
    // Array initialize kiya
    vector<int> arr = {1, 2, 3, 4, 3, 2, 1};
    int target = 3;

    // First occurrence check
    int first = firstOccur(arr, target, 0);
    // Last occurrence check
    int last = lastOccur(arr, target, 0);

    cout << "Target: " << target << endl;
    if (first != -1) {
        cout << "First Occurrence at index: " << first << endl;
        cout << "Last Occurrence at index: " << last << endl;
    } else {
        cout << "Target not found in the array." << endl;
    }

    return 0;
}
