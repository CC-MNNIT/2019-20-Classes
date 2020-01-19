#include<bits/stdc++.h>
using namespace std;

#define ll long long

// Divisors of a number
vector<int> divs;
void solve(int x) {
	int sq = sqrt(x);
	for(int i=1; i<=sq; i++) {
		if(x % i == 0) {
			divs.push_back(i);
			if(i * i != x) divs.push_back(x/i);
		}
	}
}
// -------------------------------------------

// prime divisors with calculation
vector<int> pdivs;
void solve2(int x) {
	for(int i=2; i*i <= x; i++) {
		if(x % i == 0) {
			pdivs.push_back(i);
			while(x % i==0) x /= i;
		}
	}
	if(x > 1) pdivs.push_back(x);
}
// -----------------------------------


// Seive with smallest prime factor
const int N = 2e5+5;
vector<int> primes;
vector<bool> isPrime(N);
vector<int> spf(N,-1);

void seive() {
	for(int i=2; i<N; i++) {
		isPrime[i] = true;
	}
	for(int i=2; i<N; i++) {
		if(isPrime[i] == true) {
			spf[i]=i;
			for(int j=i*i; j<N; j+=i) {
				isPrime[j] = false;
				if(spf[j] == -1)
					spf[j] = i;
			}
		}
	}
	for(int i=2;i<N;i++)
		if(isPrime[i])
			primes.push_back(i);
}

// ---------------------------------------------

#define N 1000005
void solve3() {
	int div[N];
	for(int i = 1; i < N; i++){
		for(int j = i; j < N ; j += i){
			div[j] += 1;
		}
		cout << i << " " << div[i] << "\n";
	}					

}

// Q. In each query you will get an integer, you have to output number of divisors this number has.
/*
	constraints:-
		1 <= Q <= 1e5
		1 <= n <= 1e6
*/ 
void solve4() {
	int q;
	cin >> q;
	while(q--) {
		int n;
		cin >> n;
		int ans = 1;
		while(n > 1) {
			int lp = spf[n], cnt = 1;
			while(n%lp == 0) {
				n /= lp;
				cnt++;
			}
			ans *= cnt;
		}
		cout << ans << endl;
	}
}



//// modular exponentiation  --- O(logn)
#define mod 1000000007
ll power(ll a,ll n){
	if(n == 0){
		return 1;
	}
	a %= mod;
	ll y = power(a, n/2)%mod;
	if(n % 2 == 1){
		return ((a*y) % mod * y)%mod;
	}
	else return (y*y)%mod;
}

// -----------------------------------------

// inverse modulo calculation (using fermat's little theorem)
ll inverse(ll a){
	return power(a,mod-2); // a and m are coprime 
}

// -----------------------------------------

int main(){
	// int x; 
	// cin >> x;
	// solve2(x);
	// for(int factors: pdivs) {
	// 	cout << factors << ' ' ;
	// }
	seive();
	ll fact[N], ifact[N];
	fact[0] = 1;
	for(int i = 1; i <= N; i++){
		fact[i] = (fact[i-1]*i)%mod;
	}
	for(int x : primes) cout << x << ' ';
	return 0;
}




















// https://www.spoj.com/problems/INS17M/
// https://www.codechef.com/SEPT18B/problems/ANDSQR





// https://forum.videolan.org/viewtopic.php?t=85347

// https://dzone.com/articles/htmlcssjavascript-gui-java-0




