#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int shortestPathBinaryMatrix(vector<vector<int>> &grid)
    {

        int n = grid.size();
        if (grid[0][0] || grid[n - 1][n - 1])
            return -1;

        grid[0][0] = 1;

        queue<pair<int, int>> q;
        q.push({0, 0});

        int dist = 0;
        int dr[] = {0, 0, 1, -1, -1, -1, 1, 1};
        int dc[] = {1, -1, 0, 0, -1, 1, -1, 1};

        while (!q.empty())
        {

            dist++;
            int t = q.size();

            while (t--)
            {

                int r = q.front().first;
                int c = q.front().second;
                q.pop();

                if (r == n - 1 && c == n - 1)
                    return dist;
                for (int i = 0; i < 8; i++)
                {

                    int nr = r + dr[i];
                    int nc = c + dc[i];

                    if (nr>=0 && nc>=0 && nr<n && nc<n && !grid[nr][nc])
                    {
                        grid[nr][nc] = 1;
                        q.push({nr, nc});
                    }
                }
            }
        }
        return -1;
    }
};