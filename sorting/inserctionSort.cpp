#include <iostream>
using namespace std;

void insertionsort(int arr[], int n)
{
    for (int i = 0 ; i<n; i++){
        int j = i;
        while(j>0&&arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
        cout<<"arr is : ";
    for(int i = 0 ; i< n;i++){
        cout<<arr[i]<<" , ";
    }
}
int main()
{
    int arr[] = {60, 50, 10, 30, 20, 40};
    int n = 6;

    insertionsort(arr, n);
}