#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n]; // Declare the array after reading the value of n
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    long long  ans = 0;
    int curr = 1;
    while (curr < n) {
        if (arr[curr-1] > arr[curr]) {
            ans += arr[curr-1] - arr[curr];
            arr[curr] = arr[curr-1];
        }
        curr++;
    }

    cout << ans << endl;

    return 0;
}


