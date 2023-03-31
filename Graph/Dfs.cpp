#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void dfs(int node, unordered_map<int, bool> &visited, unordered_map<int, list<int>> &adjl,
         vector<int> &component)
{

    component.push_back(node);
    visited[node] = true;

    for (auto i : adjl[node])
    {
        if (!visited[i])
        {
            dfs(i, visited, adjl, component);
        }
    }
}



vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
    {
        // adjacency list prepare
        unordered_map<int, list<int>> adjl;
        for (int i = 0; i < edges.size(); i++)
        {
            int u = edges[i][0];
            int v = edges[i][1];
            adjl[u].push_back(v);
            adjl[v].push_back(u);
        }

        vector<vector<int>> ans;

        unordered_map<int, bool> visited;

        for (int i = 0; i < V; i++)
        {
            if (!visited[i])
            {
                vector<int> component;
                dfs(i, visited, adjl, component);
                ans.push_back(component);
            }
        }

        return ans;
    }

