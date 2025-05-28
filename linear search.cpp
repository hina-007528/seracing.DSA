#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int target) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == target)
            return i; // return index if found
    }
    return -1; // return -1 if not found
}

int main() {
    int arr[] = {10, 23, 45, 70, 11, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 70;

    int result = linearSearch(arr, n, target);

    if(result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
