#include <bits/stdc++.h>
using namespace std;
void f(vector<int>::reverse_iterator it1, vector<int>::reverse_iterator it2){
   for (auto it = it1; it != it2; it++)
        cout << *it << " ";
    cout<<endl;
}
int main() {
                int testcase;
                cin >> testcase;
                while(testcase--){
                    int N;
                    cin >> N;
                    // Declaring vecto
                    vector<int> v;
                    //Taking input to vecto
                    for(int i = 0;i<N;i++){
                        int k;
                        cin >> k;
                        v.push_back(k);
                    }
                    // Calling function
                    f(v.rbegin(), v.rend());
                }
                return 0;
} 