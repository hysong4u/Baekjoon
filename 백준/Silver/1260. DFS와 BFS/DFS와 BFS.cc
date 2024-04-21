#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

void dfs(vector<vector<int>>& graph, vector<bool>& visited, int node){
    cout << node << " ";
    visited[node] = true;
    for(int next : graph[node]){
        if(!visited[next]){
            dfs(graph, visited, next);
        }
    }
}

void bfs(vector<vector<int>>& graph, vector<bool>& visited, int start){
    queue<int> q;
    q.push(start);
    visited[start] = true;

    while(!q.empty()){
        int node = q.front();
        q.pop();
        cout << node << " ";

        for(int next : graph[node]){
            if(!visited[next]){
                q.push(next);
                visited[next] = true;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, s;
    cin >> n >> m >> s;

    vector<vector<int>> graph(n + 1);

    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for(int i = 1; i <= n; i++){
        sort(graph[i].begin(), graph[i].end());
    }

    vector<bool> visited_dfs(n + 1, false);
    dfs(graph, visited_dfs, s);
    cout << '\n';

    vector<bool> visited_bfs(n + 1, false);
    bfs(graph, visited_bfs, s);
    cout << '\n';

    return 0;
}
