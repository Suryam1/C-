#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue <int> f1;
    f1.push(1);
    f1.push(2);
    f1.push(3);
    f1.push(4);
    cout<<f1.front()<<" ";
    f1.pop();
    cout<<f1.back()<<" ";
    return 0;
}