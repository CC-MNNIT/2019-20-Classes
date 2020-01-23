// https://www.hackerearth.com/problem/algorithm/lol-8/
// The following code is the solution for lol-8 hackerearth problem
// Refer the following code for seeing how to code matrix exponentiation
// Try to construct matrix F and M yourself!

#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9+7;

void multiply(ll a[4][4], ll b[4][1]) {
    ll mul[4][1] = {0}, i, j, k;
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 1; j++) {
            for(k = 0; k < 4; k++) {
                mul[i][j] = (mul[i][j] + a[i][k]*b[k][j]%mod)%mod;
            }
        }
    }
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 1; j++)
            b[i][j] = mul[i][j];
    }
}

void multiply1(ll a[4][4], ll b[4][4]) {
    ll mul[4][4] = {0}, i, j, k;
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            for(k = 0; k < 4; k++) {
                mul[i][j] = (mul[i][j] + a[i][k]*b[k][j]%mod)%mod;
            }
        }
    }
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++)
            a[i][j] = mul[i][j];
    }
}

ll power(ll n) {
    if(n == 0)
        return 1;    
    ll M[4][1] = {1,1,3,3};
    ll F[4][4] = {{1,1,3,3},{1,0,0,0},{0,0,3,3},{0,0,0,3}};
    while(n) {
        if(n%2 == 1) {
            multiply(F, M);
        }
        multiply1(F, F);
        n /= 2;
    }
    return M[0][0];
}
 
 
int main() {
    ll t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        if(n == 0 || n == 1)
            cout << 1 << endl;
        else
            cout << power(n-1) << endl;
    }
    return 0;
}

