#include <iostream>
#include <vector>
using namespace std;

int runningTime(vector<int>& arr) {
    int n = arr.size();
    int shifts = 0;

    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        // Shift all elements greater than key
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];  // shift
            shifts++;
            j--;
        }
        arr[j + 1] = key;  // insert key
    }

    return shifts;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << runningTime(arr) << endl;
    return 0;
}
