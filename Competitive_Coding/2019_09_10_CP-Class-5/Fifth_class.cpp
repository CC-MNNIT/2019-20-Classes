/*
    1. Factorial & inverse factorial calculation under give modulo
    2. Binary Search
    3. some problems on binary search
*/


long long fact[N], invfact[N];
const long long MOD = 1e9 + 7;
long long power(long long a, long long b, long long m)
{
    a %= m;
    long long ans=1;
    while(b)
    {
        if(b&1)
            ans=(ans*a)%m;
        b/=2;
        a=(a*a)%m;
    }
    return ans;
}

int modinv(int k)
{
    return power(k, MOD-2, MOD);
}


void precompute() {
    fact[0]=fact[1]=1;
    invFact[0] = 1;
    invFact[1] = 1;

    for(int i=2;i<N;i++) {
        fact[i]=fact[i-1]*i;
        fact[i]%=MOD;
        invFact[i] = power(fact[i], MOD-2, MOD);   // complextixy of loop - O(N*log(MOD))
    }

    invfact[N-1]=modinv(fact[N-1]);
    for(int i=N-2;i>=0;i--)
    {
        invfact[i]=invfact[i+1]*(i+1);  // complexity of Loop - O(n) [better approach for calculating inverse factorials]
        invfact[i]%=MOD;
    }
}

// compute nCr%MOD
long long  nCr(long long x, long long y)
{
    if(y>x)
        return 0;
    int num=fact[x];
    num*=invfact[y];
    num%=MOD;
    num*=invfact[x-y];
    num%=MOD;
    return num;
}

int main() {
    precompute();
    cout << nCr(4, 2) << '\n';   // ouput - 6
}

////  ----- Binary search

// Q2. Given a sorted array of size n. Find the upper bound of a given number, say k. ( Upper bound is the element which is just greater than the given number)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,arr[1000];
    cin>>n>>k;
    for(int i=0; i < n; i++)
        cin>>arr[i];
    for(int i=0; i<n ; i++)
        if(arr[i]<=k)
            cout<<"No ";
        else cout<<"Yes ";
    cout<<endl;
    int lo=0, hi=n-1, ans=-1;
    while( lo <= hi ){
        int mid = (lo + hi)/2;
        if(arr[mid] > k){
            ans = mid;
            hi = mid-1;
        }
        else
            lo = mid+1;
    }
    if( ans==-1 )
        cout<<"All numbers are smaller";
    else cout<<arr[ans]<<endl;
    return 0;
}


// Q4. Find the minimum size of subarray which contains all the letters of alphabet atleast once.
//        Const:-
//     1 <= n <= 100000

#include <bits/stdc++.h>
using namespace std;
int freq[27],n;
char arr[100005];
int totDisCharacters(){
    int cnt = 0;
    for(int i = 0; i<26 ; i++)
        if(freq[i])
            cnt++;
    return cnt;
}
bool solve(int wind){
    //creating initial window
    for(int i = 0; i < wind; i++)
        freq[arr[i]-'a']++;
    if( totDisCharacters() == 26)
        return true;
    for(int i = wind; i < n; i++){
        //shifting window
        freq[ arr[i] - 'a' ]++;
        freq[arr[i-wind]-'a']--;

        if( totDisCharacters() == 26 )
            return true;
    }
    for(int i=0; i<26 ; i++)
        freq[i]=0;
    return false;
}
int binarySearch(){
    int lo = 1, hi = n, ans =- 1;
    while(lo <= hi){
        int mid = (lo + hi)/2;
        if( solve(mid) == true ){
            ans = mid;
            hi = mid-1;
        }
        else lo = mid+1;
    }
    return ans;
}
int main(){
    // Input Format -> int n
    // Character Array-> like asdfabcdefghijklmnospqrstuvwxyzadf
    scanf("%d%*c",&n);
    for(int i=0; i<n ; i++){
        scanf("%c",arr+i);
    }
    cout<<binarySearch();
    return 0;
}








 // a*n^3 + b*n + c >=z
// constraint ->   -10^5<=n<=10^5

ll low=-100000;
ll high=100000;
ll ans=-1;

while(low<=high){
  ll mid=(low+high)/2LL;
  ll value=a*mid*mid*mid + b*mid + c;
  if(value>=z){
     ans=mid;
     high=mid-1;
  }else{
     low=mid+1;
  }
}


