#include <unordered_map>
#include <list>

bool check_cycle(int node, unordered_map<int, bool> &visited, unordered_map<int, bool> &dfs_visited, unordered_map<int, list<int>> &adjl)
{
    visited[node] = true;
    dfs_visited[node] = true;

    for (auto neighbour : adjl[node])
    {
        if (!visited[neighbour])
        {
            bool ans = check_cycle(neighbour, visited, dfs_visited, adjl);
            if (ans == 1)
            {
                return true;
            }
        }
        else if (dfs_visited[neighbour] == 1)
        {
            return true;
        }
    }

    dfs_visited[node] = false;
    return false;
}

int detectCycleInDirectedGraph(int n, vector<pair<int, int>> &edges)
{

    // adjacency list
    unordered_map<int, list<int>> adjl;
    for (int i = 0; i < edges.size(); i++)
    {
        int u = edges[i].first;
        int v = edges[i].second;

        adjl[u].push_back(v);
    }

    unordered_map<int, bool> visited;
    unordered_map<int, bool> dfs_visited;

    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            bool ans = check_cycle(i, visited, dfs_visited, adjl);
            if (ans == 1)
            {
                return true;
            }
        }
        return false;
    }
}