#include <bits/stdc++.h>
using namespace std;
int main()
{
    forward_list <char> f1;
    f1.push_front('r');
    f1.push_front('t');
    f1.push_front('a');
    f1.pop_front();
    for (auto x: f1)
    cout<<x<<" ";
    return 0;
}