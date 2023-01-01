#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack <int> f1;
    f1.push(1);
    f1.push(2);
    f1.push(3);
    f1.push(4);
    cout<<f1.top()<<" ";
    f1.pop();
    cout<<f1.top()<<" ";
    return 0;
}