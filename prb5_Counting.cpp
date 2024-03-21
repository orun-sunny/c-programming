
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1005;

int n, m;
char grid[MAXN][MAXN];
int room_count, longest_room;


// Depth-first search
void dfs(int x, int y, int& room_s)
{
    if (x < 0 || x >= n || y < 0 || y >= m)
    {
        return;
    }
    if (grid[x][y] == '#')
    {
        return;
    }
    if (grid[x][y] == '.')
    {
        grid[x][y] = '#';
        room_s++;
        dfs(x-1, y, room_s);
        dfs(x+1, y, room_s);
        dfs(x, y-1, room_s);
        dfs(x, y+1, room_s);
    }
}

int main()
{
    cin >> n >> m;  // Input grid dimensions
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }

     // Traverse grid to find rooms and their sizes
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == '.')
            {
                room_count++; // Increment room count
                int room_s = 0;
                dfs(i, j, room_s);
                longest_room = max(longest_room, room_s);
            }
        }
    }

    cout << "Rooms - " << room_count << "\n";
    cout << "Length of the longest room - " << longest_room << "\n";

    return 0;
}
