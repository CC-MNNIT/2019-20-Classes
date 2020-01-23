#include<bits/stdc++.h>
using namespace std;

const int N;

int findParent(int i) {
    if(par[i] != i)
        return par[i] = findParent(par[i]);
    return i;
}

void doUnion(int i, int j) {
    int p1 = findParent(i), p2 = findParent(j);
    par[p1] = p2;
}

int main() {

	int i;
	
	// initialize the parents of every node as itself
	for(i = 0; i < N; i++)
		par[i] = i;

	// groups 1 and 5 into a single group
	doUnion(1, 5);

	// groups 1, 5 and 2 into a single group (since 1 and 5 are already
	// in one group
	doUnion(2, 5);
}