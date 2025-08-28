#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main() {

    vector<pair<int,int>> arr = {{1,2}, {2,3}, {3,4}}; 

    arr.push_back({4,5}); 
    cout << arr[3].first << " " << arr[3].second << endl;

    arr.emplace_back(5,6); 


// --------------------iterator in cppp in vectors-----------------
    vector<pair<int,int>>::iterator pr = arr.end();
    pr--; 
    cout << pr->first << " " << pr->second << endl; 


// with out pair 

    vector<int> arr1 = {1,2,3,4,5,6};

    // iterator with begin
    auto pr2 = arr1.begin();
    pr2++;
    cout << *pr2 << endl;   // prints 2

    // iterator with end
    auto pr3 = arr1.end();
    pr3--;                  // move one step back (now points to last element)
    cout << *pr3 << endl;   // prints 6

    // [] works with iterator
    cout << pr2[2] << endl; // prints 4 (since pr2 points at 2 → +2 offset)

    // .at() works only on vector
    cout << arr1.at(3) << endl; // prints 4

    // .back() works only on vector
    cout << arr1.back() << endl; // prints 6

// ----------now for loop on vector-------------------

 for(auto it = arr1.begin();it!= arr1.end(); it++){
cout<< *it<<" ";
 }
cout<<endl;
 for(auto it : arr1){
cout<< it<<" ";
 }
cout<<endl;
// erase method in vector

arr1.erase(arr1.begin()+2); // remove at start plus 2 that  is 3 
 for(auto it : arr1){
cout<< it<<" ";
 }
  cout<<endl;

arr1.erase(arr1.end()-1);  // remove at end 
for(auto it : arr1){
cout<< it<<" ";
 }
 cout<<endl;

    return 0;
}
