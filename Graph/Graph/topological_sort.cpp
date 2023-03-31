#include <bits/stdc++.h>

void topS(int node, unordered_map<int, list<int>> &adjl, vector<bool> &visited, stack<int> &s)
{

    visited[node] = 1;
    for (auto neighbour : adjl[node])
    {
        if (!visited[neighbour])
        {
            topS(neighbour, adjl, visited, s);
        }
    }

    s.push(node);
}

vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)
{
    // adj list
    unordered_map<int, list<int>> adjl;

    for (int i = 0; i < edges.size(); i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];

        adjl[u].push_back(v);
    }

    // unordered_map<int , bool > visited;
    vector<bool> visited(v);
    stack<int> s;

    for (int i = 0; i < v; i++)
    {
        if (!visited[i])
        {
            topS(i, adjl, visited, s);
        }
    }
    vector<int> ans;

    while (!s.empty())
    {
        ans.push_back(s.top());
        s.pop();
    }

    return ans;
}