#include <iostream>
#include <vector>
#include <utility> 
 using namespace std;


int main(){
    pair<int, int > p = {1,2};
    cout<<p.first<<p.second<<endl;


    pair < int,pair<int,int>> p1 ={1,{2,3}};
    cout<<p1.first<< p1.second.first<<p1.second.second<<endl;
    

 pair<int , int> arr[]={{1,2},{2,3},{3,4}};

 cout<<arr[1].first<<endl;



}