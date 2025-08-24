#include<iostream>
using namespace std;

void bubbleSort(int arr[],int n){
for(int i = n-1; i>=0;i--){
    for(int j =0; j<=i-1;j++){
        if(arr[j]>arr[j+1]){
          swap(arr[j],arr[j+1]);
        }
    }
}
    cout<<"arr is : ";
    for(int i = 0 ; i< n;i++){
        cout<<arr[i]<<" , ";
    }
}

int main (){
    int arr[]={40,50,10,20,30};
    int n = 5;
    bubbleSort(arr,n);
}