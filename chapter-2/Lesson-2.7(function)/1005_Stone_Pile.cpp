#include <bits/stdc++.h>
using namespace std;

int min_weight_diff(vector<int>& weights) {
    int n = weights.size();
    int min_diff = INT_MAX;

    for (int i = 0; i < (1 << n); ++i) {
        int group1_weight = 0;
        int group2_weight = 0;

        for (int j = 0; j < n; ++j) {
            if ((i >> j) & 1) {
                group1_weight += weights[j];
            } else {
                group2_weight += weights[j];
            }
        }

        int diff = abs(group1_weight - group2_weight);
        min_diff = min(min_diff, diff);
    }

    return min_diff;
}

int main() {
    int n;
    cin >> n;

    vector<int> weights(n);
    for (int i = 0; i < n; ++i) {
        cin >> weights[i];
    }

    int result = min_weight_diff(weights);
    cout << result << endl;

    return 0;
}