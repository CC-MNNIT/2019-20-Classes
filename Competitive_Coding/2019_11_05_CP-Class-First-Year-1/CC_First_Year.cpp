//Simple C++ program

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x;
	cin>>x;
	cout<<x<<endl;
}

// g++ file.cpp       //To compile
                      //file.cpp is the name of your program

// ./a.out            //To run

//Program to add 2 numbers

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,y;
	cin>>x>>y;
	int sum=x+y;
	cout<<sum<<endl;
}

// Given 'q' queries find sum of 2 numbers;

#include<bits/stdc++.h>
using namespace std;

int add(int x,int y){
	return x+y;
}

int main()
{
	int q;
	cin>>q;

	while(q--){
	
	int x,y;
	cin>>x>>y;
	cout<<add(x,y)<<endl;
	
	}
}

// Find 1+2+3+-----+n

int main()
{
	long long int n;
	cin>>n;

	long long int sum=0;

	for(long long int i=1;i<=n;i++){
	sum+=i;
	}

	cout<<sum<<endl;  // will cause TLE for n>10^8
	                  // better solution would be
	                  // cout<<n*(n+1)/2<<endl;

}

//Find nth fibonacci number f(0)=0, f(1)=1,.... 
// f(n)=f(n-1)+f(n-2)


// Iterative approach
int main()
{
	int n;
	cin>>n;

	int a=0;
	int b=1;

	if(n==1)cout<<a<<endl;
	else if(n==2)cout<<b<<endl;

	int c;

	for(int i=3;i<=n;i++){
	c=a+b;
	a=b;
	b=c;
	}

	cout<<c<<endl;
}

//Recursive approach

int rec(int n){
	if(n==1)return 0;
	else if(n==2)return 1;
	return rec(n-1)+rec(n-2);
}

int main(){
	int n;
	cin>>n;

	cout<<rec(n)<<endl;
}

// Different errors at online judges

Compilation Error - When you write a program in a wrong syntax

TLE - Time Limit Exceeded 
      1s = 10^8 operations
      If you exceed the no of operations allowed you will have to face TLE

MLE - Memory Limit Exceeded
      You can declare say int a[10000000];
      or bool a[100000000] at max;
      If you try to use more memory you will have to face MLE

SIGSEGV - when the program tries to access the memory
          to which it doesn't have access to.
          For example - int a[100];
          If you try to access lets say 101 element
          (a[100]) then you will have to face SIGSEGV (Segmentation Fault)

WA - Wrong logic used in program


//Time Complexity Analysis

1. n operations

for(int i=1;i<=n;i++){
	-----
}

2. n^2 operations

for(int i=1;i<=n;i++){
	for(int j=1;j<=n;j++){
	---------
	}
}

3. logn operations

while(n!=1){
	n=n/2;
	-----
}

// Judging algorithm to be used depending upon constraints

For example 

1. 1<=n<=1000

   n operations is acceptable
   n*log(n) operations is acceptable
   n^2 operations is acceptable                           

2. 1<=n<=100000
   
   n operations is acceptable
   n*log(n) operations is acceptable
   n^2 will give you TLE

   

