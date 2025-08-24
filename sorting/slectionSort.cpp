#include <iostream>
using namespace std;

void seelectioSort(int arr[], int n)

{
    for (int i = 0; i < n - 2; i++)
    {
        int mini = i;
        for (int j = i; j < n - 1; j++)
        {
            if (arr[j] < arr[mini])
            {
                cout << "before mini:" << arr[mini] << ",  j :" << arr[j] << endl;
                mini = j;
                cout << "after mini:" << arr[mini] << ",   j :" << arr[j] << endl;
            }
        }
        cout << "before mini:" << arr[mini] << ",  i :" << arr[i] << endl;

        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
        cout << "before mini:" << arr[mini] << ",  i :" << arr[i] << endl;
    }
}

int main()
{
    int arr[5] = {30, 40, 20, 50, 10};
    int n = 5;


    seelectioSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}






