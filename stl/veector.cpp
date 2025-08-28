#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main() {
    vector<pair<int,int>> arr = {{1,2}, {2,3}, {3,4}}; 

    arr.push_back({4,5}); 
    cout << arr[3].first << " " << arr[3].second << endl;

    arr.emplace_back(5,6); 

    vector<pair<int,int>>::iterator pr = arr.end();
    pr--; 

    cout << pr->first << " " << pr->second << endl; 

    return 0;
}
