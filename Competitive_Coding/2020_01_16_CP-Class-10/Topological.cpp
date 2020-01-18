#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
vector<int> g[N];


// Recursive , O(E+V)
stack<int> st;
vector<bool> vis(N);
void topo(int curr) {
	vis[curr] = true;
	for(int next : g[curr]) {
		if(!vis[next]) topo(next);
	}
	st.push(curr);
}


// Iterative(Kahn's Algo)

vector<int> inDegree(N), order;
void kahn() {
	queue<int> q;
	for(int i=1; i<=n; i++) {
		if(inDegree[i] == 0) q.push(i);
	}
	int count = 0;
	while(!q.empty()) {
		int curr = q.front(); q.pop();
		order.push_back(curr);
		count++;
		for(int next: g[curr]) {
			inDegree[next]--;
			if(inDegree[next] == 0) {
				q.push(next);
			}
		}
	}
	if(count != n) {
		cout << "No topological sorting order present\n";
	}
}


int main(){
	int n, u, v, m;
	cin >> n >> m;
	for(int i=1; i<=m; i++) {
		cin >> u >> v;
		g[u].push_back(v);
		inDegree[v]++;
	}
	for(int i=1; i<=n; i++) {
		if(!vis[i]) topo(i);
	}
	while(st.empty()) {
		cout << st.top() << ' ';
		st.pop();
	}
	cout << '\n';
	for(int x: order){
		cout << x << ' ';
	}
	return 0;
}
