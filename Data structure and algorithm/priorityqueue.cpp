#include <iostream>
#include <queue>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

int main() {
   
    // priority_queue<int> Q;
    // vector<int> v = {8, 1, 6, 4, 0, 7, 2, 9};
    // for(int x : v) Q.push(x);
    // while(!Q.empty()){
    //     cout << Q.top() << " ";
    //     Q.pop();
    // }
    // cout << endl;

        priority_queue<int, vector<int>, std::greater<int>> Q;
        vector<int> v = {8, 1, 6, 4, 0, 7, 2, 9};
        for(int x : v) Q.push(x);
        while(!Q.empty()){
            cout << Q.top() << " ";
            Q.pop();
        }
        cout << endl;
}
    
//     priority_queue<int, vector<int>, std::greater<int>> Q;
//     vector<int> v = {8, 1, 6, 4, 0, 7, 2, 9};
//     for(int x : v) Q.push(x);
//     while(!Q.empty()){
//         cout << Q.top() << " ";
//         Q.pop();
//     }
//     cout << endl;
// }
