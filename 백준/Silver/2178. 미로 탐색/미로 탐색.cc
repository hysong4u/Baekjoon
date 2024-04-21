#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<vector<int>> maze;
vector<vector<bool>> visited;
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int N, M;

void bfs(int x, int y, int cnt) {
    queue<pair<pair<int, int>, int>> q;
    q.push({{x, y}, cnt});

    while (!q.empty()) {
        int curX = q.front().first.first;
        int curY = q.front().first.second;
        int curCnt = q.front().second;
        q.pop();

        if (curX == N - 1 && curY == M - 1) {
            cout << curCnt << "\n";
            return;
        }

        for (int i = 0; i < 4; i++) {
            int nx = curX + dx[i];
            int ny = curY + dy[i];

            if (nx >= 0 && nx < N && ny >= 0 && ny < M && maze[nx][ny] == 1 && !visited[nx][ny]) {
                visited[nx][ny] = true;
                q.push({{nx, ny}, curCnt + 1});
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N >> M;

    maze.resize(N, vector<int>(M));
    visited.resize(N, vector<bool>(M, false));

    for (int i = 0; i < N; i++) {
        string row;
        cin >> row;
        for (int j = 0; j < M; j++) {
            maze[i][j] = row[j] - '0';
        }
    }

    visited[0][0] = true;
    bfs(0, 0, 1);

    return 0;
}
