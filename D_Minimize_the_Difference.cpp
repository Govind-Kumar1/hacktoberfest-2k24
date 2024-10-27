#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)

int32_t main() {
    fast_io;

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        if (n == 1) {
            cout << 0 << "\n"; // If there's only one element, the difference is 0.
            continue;
        }

        // Sorting the array helps in calculating the critical differences
        sort(arr.begin(), arr.end());

        // Calculate the critical differences
        int ans = arr[n-1] - arr[0]; // Difference between the largest and smallest element
        ans = min(ans, arr[n-1] - arr[1]); // Second smallest element to the largest
        ans = min(ans, arr[n-2] - arr[0]); // Smallest element to the second largest

        // Check the difference between adjacent elements (after multiple operations, adjacent differences can be reduced to 1)
        for (int i = 0; i < n - 1; i++) {
            ans = min(ans, arr[i+1] - arr[i]); // Adjacent element difference
        }

        // Output the minimum possible difference
        cout << ans << "\n";
    }

    return 0;
}
