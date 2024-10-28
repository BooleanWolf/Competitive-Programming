#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void maximizeK(int n) {
    vector<int> p(n);
    
    // Fill the permutation in descending order
    for (int i = 0; i < n; ++i) {
        p[i] = n - i;
    }

    // Output the permutation
    cout << "Permutation: ";
    for (int i = 0; i < n; ++i) {
        cout << p[i] << " ";
    }
    cout << endl;

    // Calculate the final value of k
    int k = 0;
    for (int i = 0; i < n; ++i) {
        if ((i + 1) % 2 == 1) { // odd index (1-based)
            k = k & p[i];
        } else { // even index (1-based)
            k = k | p[i];
        }
    }

    cout << "Final value of k: " << k << endl;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    maximizeK(n);

    return 0;
}
