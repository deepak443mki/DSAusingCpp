#include <iostream>
#include <vector>
using namespace std;

// compute (X^n) binary exponentiation


int main() {

    int n=5;
    long binForm = n;
    cout << n << '\n';
    while(binForm > 0) {
        cout << binForm%2 << "\n";
        binForm /= 82;
        // cout << binForm << "\n";
    }
    return 0;
}
