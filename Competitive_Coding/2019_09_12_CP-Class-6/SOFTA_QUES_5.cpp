/*
https://www.hackerearth.com/challenges/college/softar2y2/algorithm/d84d4b0119f74a4086d67f57d269420e/
*/

#include<bits/stdc++.h>
using namespace std;

const int N=1e6+5;
int factors[N];
int seive[N];
//int arr[N];
int prefix[N];

void init(){
	seive[0]=1;
	seive[1]=1;

	for(int i=1;i*i<=1000000;i++){
		if(seive[i]==0){
			for(int j=i*i;j<=1000000;j+=i){
                 seive[j]=1;
			}
		}
	}
	for(int i=1;i<=1000000;i++){
		for(int j=i;j<=1000000;j+=i){
			factors[j]++;
		}
	}

	for(int i=1;i<=1000000;i++){
		prefix[i]=(seive[factors[i]]==0)+prefix[i-1];
	}
}

int main()
{
	int t;
	init();
	cin>>t;
	while(t--){
        int l,r;
        cin>>l>>r;
        cout<<prefix[r]-prefix[l-1]<<endl;
	}

	return 0;
}