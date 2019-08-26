#include<bits/stdc++.h>
using namespace std;

#define ll long long


// this function will test whether n is prime or not, time complexity - O(sqrt(n))
bool primeTest(int n) {
    int sq = sqrt(n);
    for(int i=2; i<=sq; i++) {
        if(n % i == 0) return false;
    }
    return true;
}


/* Euclid's method for GCD of two numbers, time complexity - O(log(min(a, b))) */
// Think out worst case input for Euclid's algorithm
int GCD(int a, int b) {
    if(b == 0) return a;
    return GCD(b, a % b);
}

// time complexity - O(n)
ll power(ll a, ll b) {
    if(b == 0) return 1LL;
    if(b % 2 == 0) return power(a, b/2)*power(a, b/2);
    return a*power(a, b/2)*power(a, b/2);
}

ll power(ll a, ll b, ll mod) {
    if(b == 0) return 1LL;
    ll ans = power(a, b/2);
    ans *= ans;
    ans %= mod;
    if(b % 2 != 0) {
        ans *= a;
        ans %= mod;
    }
    return ans;
}

/* Modular exponentiation, time complexity - O(logn), iterative implementation */
ll binpow(ll a, ll b, ll mod) {
    ll ans = 1;
    a %= mod;
    while(b) {
        if(b % 2) {
            ans *= a;
            ans %= mod;
        }
        a = a * a % mod;
        b >>= 1;
    }
    return ans %= mod;
}

int N = 1000;
signed main() {


    /* Q. Given an array of n elements and all elements are initially zero.
        Process q queries where each query will ask you to add 1 from index l to r,
        After processing all such queries you have to print the entire array.
    */
    /*sol . For each query add +1 at index l and -1 at index r+1,
            after processing all such queries just take prefix sum of whole array
    */
    int q;
    cin >> q;
    int arr[N+5];
    memset(arr, 0, sizeof arr);
    for(int i=1; i<=q; i++) {
        int l, r;
        cin >> l >> r;
        arr[l] += 1;
        arr[r+1] -= 1;
    }

    for(int i=1; i<=N; i++) arr[i] += arr[i-1];   // our array arr is 1-indexed.



    // prime number
    int n = 31;
    cout << primeTest(n) << '\n';


    // Calculate all divisors of a number, time complexity - O(sqrt(n))
    int num = 50;
    vector<int> divs;
    int sq1 = sqrt(num);
    for(int i=1; i<=sq1; i++) {
        if(num % i == 0) {
            divs.push_back(i);
            if(num/i != i) {
                divs.push_back(num/i);      // divs will contain all divisors of num.
            }
        }
    }
    for(int x : divs) cout << x << ' ';

    // GCD(greatest common divisor), time complexity - O(min(a, b))
    int a1 = 15, b1 = 20;
    for(int i=min(a1, b1); i>=1; i--) {
        if(a1 % i == 0 && b1 % i == 0) {
            cout << "Gcd of " << a1 << " and " << b1 << ": " << i << '\n';
            break;
        }
    }
    // above method of calculating GCD of two numbers is not efficient

    /*Efficient method of calculating GCD */
    cout << GCD(a1, b1) << '\n';

    cout << __gcd(a1, b1) << '\n';   // internally implemented in C++

    /*Modular properties
        1. (a + b)%m = (a%m + b%m)%m
        2. (a - b)%m = (a%m - b%m + m)%m
        3. (a*b)%m = ((a%m)*(b%m))%m
        4. (a/b)%m = ((a%m)*(b^-1%m))%m         ---- b^-1 is modular inverse of b under modulo m
    */


    /* Fermat's little theorem
        If p is a prime number, then (a^p)-a is multiple of p

        Now add one more constraint to above theorem
        Constraint -> If a is not divisble by p
        then (a^(p-1))-1 is multiple of p.



        modular inverse of a under modulo p = (a^(p-2)) % p;

        How fast can you compute a^-1 ?          // worst case O(p) by single loop
    */
    /*Slow method for finding a^-1 */
    ll inv = 1, nn = 2, p = 5;
    for(long long i=1; i<=p-2; i++) {
        inv *= nn;
        inv %= p;
    }
    cout << inv << "\n";

    /*We need some faster method to calculate (a^-1)%p */


    /* Modular exponentiation, time complexity - O(logn) */
    ll aa = 3, bb = 4, mod = 4;
    cout << power(aa, bb, mod) << '\n';

    aa = 4, mod = 1e9 + 7;


    // modular inverse
    cout << power(aa, mod-2, mod) << '\n';

    return 0;
}
