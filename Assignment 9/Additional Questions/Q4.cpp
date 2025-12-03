#include <iostream>
#include <vector>

using namespace std;

void dfs(int i, int j, vector<vector<char>> &grid) {
    int m = grid.size();
    int n = grid[0].size();

    // Boundary or water check
    if (i < 0 || j < 0 || i >= m || j >= n || grid[i][j] == '0')
        return;

    // Mark visited
    grid[i][j] = '0';

    // Visit all 4 directions
    dfs(i - 1, j, grid);
    dfs(i + 1, j, grid);
    dfs(i, j - 1, grid);
    dfs(i, j + 1, grid);
}

int main() {
    int M, N;
    cin >> M >> N;

    vector<vector<char>> grid(M, vector<char>(N));

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> grid[i][j];
        }
    }

    int islands = 0;

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (grid[i][j] == '1') {
                islands++;
                dfs(i, j, grid);
            }
        }
    }

    cout << islands;
    return 0;
}
