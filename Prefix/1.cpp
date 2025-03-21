#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "Enter size of Array: ";
    int n;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> pre(n, 0);
    pre[0] = arr[0];
    for (int i = 1; i < n; i++) {
        pre[i] = pre[i - 1] + arr[i];
    }
    cout << "Enter the number of queries: ";
    int q;
    cin >> q;
    while (q--) {
        int L, R;
        cout << "Enter range (L R): ";
        cin >> L >> R;
        if (L == 0)
            cout << pre[R] << endl;
        else
            cout << pre[R] - pre[L - 1] << endl;
    }
    return 0;
}
