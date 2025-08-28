#include<iostream>
using namespace std ;

void  largestis(int arr[],  int size){
     int largest = arr[0];

     for(int i = 0 ; i <size ; i++){
        if (arr[i] > largest){
            largest = arr[i];
        }
     }
     cout<<largest<<endl;
}

int main(){
 int arr[] = {10,50,60,20,40,30};
 int size = 6;
largestis(arr,size);

}