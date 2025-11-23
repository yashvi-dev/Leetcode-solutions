#include <bits/stdc++.h>
using namespace std;

void dfsMaze(const vector<vector<int>>& mat, int r, int c,
             vector<string>& ans, string path, vector<vector<bool>>& visited) {
    int n = mat.size();

    // boundary and invalid checks first
    if (r < 0 || c < 0 || r >= n || c >= n) return;
    if (mat[r][c] == 0) return;            // blocked cell
    if (visited[r][c]) return;             // already visited

    // reached destination
    if (r == n - 1 && c == n - 1) {
        ans.push_back(path);
        return;
    }

    // mark visited
    visited[r][c] = true;

    // move Down, Up, Left, Right (order can be changed)
    dfsMaze(mat, r + 1, c, ans, path + 'D', visited);
    dfsMaze(mat, r - 1, c, ans, path + 'U', visited);
    dfsMaze(mat, r, c - 1, ans, path + 'L', visited);
    dfsMaze(mat, r, c + 1, ans, path + 'R', visited);

    // backtrack
    visited[r][c] = false;
}

vector<string> findPath(const vector<vector<int>>& mat) {
    int n = mat.size();
    vector<string> ans;

    if (n == 0) return ans;
    if (mat[0][0] == 0) return ans; // start blocked -> no paths

    // initialize visited n x n with false
    vector<vector<bool>> visited(n, vector<bool>(n, false));

    dfsMaze(mat, 0, 0, ans, "", visited);

    // optional: sort results lexicographically if needed
    sort(ans.begin(), ans.end());
    return ans;
}

// Example main to test:
int main() {
    vector<vector<int>> mat = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {0, 1, 0, 0},
        {1, 1, 1, 1}
    };

    vector<string> paths = findPath(mat);
    if (paths.empty()) {
        cout << "No paths found\n";
    } else {
        for (auto &p : paths) cout << p << '\n';
    }
    return 0;
}
