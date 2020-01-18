#include<bits/stdc++.h>
using namespace std;

const int N = 2e5 + 5;
int par[N];

// for DSU
int findParent(int i) {
    if(par[i] != i)
        return par[i] = findParent(par[i]);
    return i;
}

void doUnion(int i, int j) {
    int p1 = findParent(i), p2 = findParent(j);
    par[p1] = p2;
}


//------------------------------------


// for Kruskal
vector<pair<int, pair<int, int> > > edges;

int kruskal() {
	int minCost = 0;
	sort(edges.begin(), edges.end());

	for(int i=0; i<edges.size(); i++) {
		int u = edges[i].second.first;
		int v = edges[i].second.second;
		int w = edges[i].first;
		int p = findParent(u), q = findParent(v);
		if(p != q) {
			doUnion(u, v);
			minCost += w;
		}
	}
	return minCost;
}

// -----------------------------------

int main() {

	int i;
	
	// initialize the parents of every node as itself
	for(i = 0; i < N; i++)
		par[i] = i;

	int n, m, w, u, v;
	cin >> n >> m;
	for(int i=1; i<=n; i++) {
		cin >> u >> v >> w;
		edges.push_back({w, {u, v}});
	}

	kruskal();
	return 0;
}