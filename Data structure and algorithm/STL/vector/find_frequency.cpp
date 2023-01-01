#include <bits/stdc++.h>
using namespace std;
/*Function to find frequency of x

* x : element whose frequency is to be found

* v : input vector

*/
int f(vector<int> v, int x){
    return count(v.begin(),v.end(),x);
}
int main() {
                int testcase;
                cin >> testcase;
                while(testcase--){
                    int N;
                    cin >> N;
                    vector<int> v;
                    // Taking vector element input
                    for(int i = 0;i<N;i++){
                        int k;
                        cin >> k;
                        v.push_back(k);
                    }
                    // element whose frequency to be find
                    int x;
                    cin >> x;
                    cout << f(v, x) << endl;
                }
                return 0;
} 