#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    // Check for the possibility of a beautiful permutation
    if (n == 1) {
        cout << 1;
    } else if (n < 4) {
        cout << "NO SOLUTION";
    } else {
        // Generate a beautiful permutation
        vector<int> permutation;
        for (int i = 2; i <= n; i += 2) {
            permutation.push_back(i);
        }
        for (int i = 1; i <= n; i += 2) {
            permutation.push_back(i);
        }

        // Print the beautiful permutation
        for (int i = 0; i < n; ++i) {
            cout << permutation[i] << " ";
        }
    }

    return 0;
}
