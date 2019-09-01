#include<bits/stdc++.h>
using namespace std;

vector<int> primes;


// seive of eratosthenes, time complexity - O(nloglogn)
void sieve() {
    int n;
    n = 1e6;
    vector<bool> is_prime(n+1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }
}


int l, r;
const int N = 1e6 + 5;
bool isPrime[N];


// (l + i - 1)/i = ceil(l/i)

// ((l + (i - 1)) / i)  * i , by writing this we are just calculating first multiple of i which is greater than l.

void segmented_sieve() {
    for(int i = 0; i < r - l + 1; i++) isPrime[i] = true;
    for (long long i = 2; i * i <= r; ++i) {
        for (long long j = max(i * i, (l + (i - 1)) / i  * i); j <= r; j += i) {
            isPrime[j - l] = false;
        }
    }

}

signed main() {
    sieve();

    l = 1e9, r = 1e9+1e6;   // |r - l| <= 1e6, we can apply segmented sieve
    segmented_sieve();

    // now find primes in l to r
    for (long long i = max(l, 2); i <= r; i++) {
        if (isPrime[i - l]) {
            //then i is prime
        }
    }
    return 0;
}
