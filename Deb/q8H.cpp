#include <iostream>
using namespace std;

class Distance {
    private:
        int meter;
        int friend addFive(Distance);

    public:
        Distance() : meter(0) {}
        
};
int Distance:: addFive(Distance d) {
    d.meter += 5;
    return d.meter;
}

int main() {
    Distance D;
    cout << "Distance: " << addFive(D);
    return 0;
}