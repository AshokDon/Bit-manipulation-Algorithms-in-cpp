/*
Problem 2: Count integers ≤ n that are divisible by exactly one of the elements in a list
Given: List of k integers and a number n.
Task: Count numbers ≤ n divisible by exactly one integer in the list.
Use: For each subset, calculate count and adjust by subset size

*/

#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
    if(b==0) return a;
    return gcd(b,a%b);
}

long long lcm(long long a, long long b) {
    return a / gcd(a, b) * b;
}

long long count_exactly_one(long long n, vector<int>& primes) {
    int k = primes.size();
    vector<long long> exact(1 << k, 0);

    for (int mask = 1; mask < (1 << k); ++mask) {
        long long curr_lcm = 1;
        bool valid = true;
        for (int i = 0; i < k; ++i) {
            if (mask & (1 << i)) {
                curr_lcm = lcm(curr_lcm, primes[i]);
                if (curr_lcm > n) {
                    valid = false;
                    break;
                }
            }
        }
        if (!valid) continue;
        exact[mask] = n / curr_lcm;
    }

    // Inclusion-Exclusion to calculate exact count
    for (int mask = (1 << k) - 1; mask >= 1; --mask) {
        for (int sub = mask + 1; sub < (1 << k); ++sub) {
            if ((sub & mask) == mask) {
                exact[mask] -= exact[sub];
            }
        }
    }

    long long ans = 0;
    for (int mask = 1; mask < (1 << k); ++mask) {
        if (__builtin_popcount(mask) == 1) {
            ans += exact[mask];
        }
    }
    return ans;
}

int main() {
    long long n = 20;
    vector<int> primes = {2, 3, 5};
    cout << count_exactly_one(n, primes) << endl;
    return 0;
}
