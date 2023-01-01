#include<iostream>
using namespace std;
int main() {
  int number;
  cin>>number;
  string result;
  result = (number == 0) ? "Zero" ? (number > 0) ? "Positive" : "Negative";
  cout << "Number is " << result;
  return 0;
}
