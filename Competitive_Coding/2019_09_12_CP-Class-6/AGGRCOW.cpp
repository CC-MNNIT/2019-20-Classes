#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

const int N=1e5+5;
ll a[N];

int solve(int x,int n,int c)
{
	int last_cow_placed=0;
	c--;

	for(int j=1;j<n;j++)
	{
		
		if(a[j]-a[last_cow_placed]>=x)
		{
			c--;
			last_cow_placed=j;
		}
		if(c==0)
			return 1;
	}
	return 0;
}
int main()
{
	#ifndef ONLINE_JUDGE
    freopen("f.in","r",stdin);
    freopen("f.out","w",stdout);
    #endif


	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,c;
		scanf("%d%d",&n,&c);

		for(int i=0;i<n;i++)
			scanf("%lld",&a[i]);

		sort(a,a+n);


		int low=0;
		int high=a[n-1]-a[0];
		int ans;
		while(low<=high)
		{
			int mid=low+(high-low)/2;
			if(solve(mid,n,c)==1)
			{
				ans=mid;
				low=mid+1;
			}
			else
				high=mid-1;
		}
		printf("%d\n",ans);
	}
return 0;
} 