#include <unordered_map>

#include <algorithm>

#include <string>

#include <iostream>

using namespace std;

int main()

{

    string str = "CodingCodeKaze";

 

    unordered_map<char, int> freq;

    for (const char c: str) {

        freq[c]++;

    }

 

    for (auto pair: freq) {

        cout << '{' << pair.first << ": " << pair.second << '}' << endl;

    }

 

    return 0;

}