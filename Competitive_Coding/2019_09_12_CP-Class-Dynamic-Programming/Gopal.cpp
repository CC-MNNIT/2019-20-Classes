/*

https://www.hackerearth.com/problem/algorithm/gopals-stairs/

*/


#include<bits/stdc++.h>
using namespace std;

const int N=1e5+5;

int n;
int dp[N];
int MOD=1e9+7;

int add(int a,int b){
	int ans=(a+b)%MOD;
	if(ans<0)ans+=MOD;
	return ans;
}


int fun(int i)
{
	if(i<0)return 0;
	if(i==0)return 1; //reached nth stair. One of the ways of reaching nth stair is ok return 1

	int &res=dp[i];

	if(res!=-1)return res;

	int ans=0;
	ans=add(ans,fun(i-1));
	ans=add(ans,fun(i-2));
	ans=add(ans,fun(i-3));

	return res=ans; 


}

void fun2(){
	
	memset(dp,0,sizeof(dp));
	dp[0]=1;
	for(int i=1;i<=n;i++){
          if(i-1>=0)dp[i]=add(dp[i],dp[i-1]);
          if(i-2>=0)dp[i]=add(dp[i],dp[i-2]);
          if(i-3>=0)dp[i]=add(dp[i],dp[i-3]);
          
          
	}

}

int main()
{
    memset(dp,-1,sizeof(dp));
    n=100000;
    fun(n); //recursive
    //fun2();//iterative
	int t;
	cin>>t;
	while(t--)
	{
	    int x;
	    cin>>x;
	    cout<<dp[x]<<endl;
		
	}
}