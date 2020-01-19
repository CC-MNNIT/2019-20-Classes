#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
vector<pair<int, int> > g[N];


int prims(int src) {
	priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > pq;
	pq.push({0, src});
	vector<bool> mark(N, false);
	int minCost = 0;
	while(!pq.empty()) {
		auto it = pq.top(); pq.pop();
		int curr = it.second;
		if(mark[curr] == true) continue;
		minCost += it.first;
		mark[curr] = true;
		for(auto next: g[curr]) {
			if(mark[next.first] == true) continue;
			pq.push({next.second, next.first});
		} 
	}
	return minCost;
}

int main() {
	int n, u, v, w, m;
	cin >> n >> m;
	for(int i=1; i<=m; i++) {
		cin >> u >> v >> w;
		g[u].push_back({v, w});
		g[v].push_back({u, w});
	}
	int source = 1;
	int minCost = prims(source);
	cout << minCost << '\n';

	return 0;
}