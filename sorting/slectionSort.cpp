#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {   // outer loop runs n-1 times
        int mini = i;
        for (int j = i + 1; j < n; j++) { // find smallest in remaining array
            if (arr[j] < arr[mini]) {
                mini = j;
            }
        }
        swap(arr[i], arr[mini]);  // swap with the smallest found
    }
}

int main() {
    int arr[5] = {30, 40, 20, 50, 10};
    int n = 5;

    selectionSort(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
