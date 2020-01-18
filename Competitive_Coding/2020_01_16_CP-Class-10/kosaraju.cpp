// Strongly Connected Components
// Following code prints all the strongly connected components in a newline

void dfs(int node, vector<vector<int>> &graph, int visited[], stack<int> &s) {
    visited[node] = 1;
    for(auto child : graph[node]) {
        if(!visited[child]) {
            visited[child] = 1;
            dfs(child, graph, visited, s);
        }
    }
    s.push(node);
}


void dfs2(int node, vector<vector<int>> &rev_graph, int visited[], vector<int> &path_visited) {
    path_visited.push_back(node);
    for(auto child : rev_graph[node]) {
        if(!visited[child]) {
            visited[child] = 1;
            dfs2(child, rev_graph, visited, path_visited);
        }
    }
}

// Assuming the graph is given as input as vector of vectors
void findAllSCCs(vector<vector<int>> graph) {
    int i, n = graph.size();
    int visited[n];
    stack<int> s;
    memset(visited, 0, sizeof visited);
    for(i = 0; i < n; i++) {
        if(!visited[i])
            dfs(i, graph, visited, s);
    }
   
    vector<vector<int>> rev_graph;
    for(i = 0; i < n; i++) {
        for(auto child : graph[i]) {
            rev_graph[child].push_back(i);
        }
    }
   
    for(i = 0; i < n; i++)
        visited[i] = 0;
    while(!s.empty()) {
        int top = s.top();
        s.pop();
        if(!visited[top]) {
            vector<int> path_visited;
            dfs2(top, rev_graph, visited, path_visited);
            for(auto ele : path_visited)
                cout << ele << " ";
            cout << "\n";    
        }
    }
}
