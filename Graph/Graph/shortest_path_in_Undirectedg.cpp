#include <unordered_map>
#include <queue>
#include <vector>
#include <list>
vector<int> shortestPath(vector<pair<int, int>> edges, int n, int m, int s, int t)
{

    // adj list
    unordered_map<int, list<int>> adjl;
    for (int i = 0; i < edges.size(); i++)
    {
        int u = edges[i].first;
        int v = edges[i].second;

        adjl[u].push_back(v);
        adjl[v].push_back(u);
    }

    unordered_map<int, bool> visited;
    unordered_map<int, int> parent;

    // bfs traversal
    queue<int> q;
    q.push(s);
    parent[s] = -1;
    visited[s] = true;

    while (!q.empty())
    {
        int front = q.front();
        q.pop();

        for (auto i : adjl[front])
        {
            if (!visited[i])
            {
                visited[i] = true;
                parent[i] = front;
                q.push(i);
            }
        }
    }

    // shortest path
    vector<int> ans;
    int c = t;
    ans.push_back(t);
    while (c != s)
    {
        c = parent[c];
        ans.push_back(c);
    }
    reverse(ans.begin(), ans.end());

    return ans;
}
//tc and sc = linear O(v+e)