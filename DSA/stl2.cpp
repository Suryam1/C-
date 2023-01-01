#include <bits/stdc++.h>
using namespace std;
int main()
{
    list <char> f1;
    f1.push_front('r');
    f1.push_front('t');
    f1.push_back('q');
    f1.push_front('a');
    f1.push_back('n');
    for (auto x: f1)
    cout<<x<<" ";
    return 0;
}