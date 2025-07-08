#include <bits/stdc++.h>
using namespace std;

// // Moves element at idx to its correct position in the sorted part of array
// void place_right(vector<int>& arr, int idx) {
//     if (idx <= 0) return;

//     int val = arr[idx];
//     if (arr[idx - 1] > val) {
//         swap(arr[idx], arr[idx - 1]);
//         place_right(arr, idx - 1); // Recurse backward
//     }
// }

// // Recursively processes entire array from left to right
// void sort_recursive(vector<int>& arr, int idx) {
//     if (idx == arr.size()) return;

//     place_right(arr, idx);             // Place current element in correct position
//     sort_recursive(arr, idx + 1);      // Recurse forward
// }

void add(vector<int>& arr, int ele) {
    if(arr.size() == 0 || ele > arr.back()) {
        arr.push_back(ele);
        return;
    }
    int last_ele= arr.back();
    arr.pop_back();
    add(arr, ele);
    arr.push_back(last_ele);
    return;
}

void sort_recursive(vector<int>& arr, int idx) {
    if(idx == 0) return;
    int ele=arr[idx];
    arr.pop_back();
    sort_recursive(arr,idx-1);
    add(arr,ele);
    return;
}

int main() {
    vector<int> arr = {2, 3, 7, 6, 4};

    sort_recursive(arr, arr.size()-1);  // Start from index 0

    for (int ele : arr)
        cout << ele << " ";  // Output: 2 3 4 6 7

    cout << endl;
    return 0;
}
