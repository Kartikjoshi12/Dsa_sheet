#include<iostream>
using namespace std ;

int findunique (int arr[] , int n){
    int ans = 0;
    for( int i = 0; i <n;  i++){
        ans  = ans ^ arr[i];
    }
    return ans;
}

int main(){
 int arr[]= {10,20,30,20,30,20};
 int size = 6;

 int ans = findunique(arr,size);
 cout<<ans<<endl;
}
