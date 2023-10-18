#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 5;
vector<int> adj[N];
bool visited[N];
int dist[N];
// unsolved
void bfs(int src)
{
    visited[src] = true;
    dist[src] = 0;

    queue<int> myQ;
    myQ.push(src);

    while (!myQ.empty())
    {
        int dlt = myQ.front();
        myQ.pop();
        for (auto child : adj[dlt])
        {
            if (visited[child] == true)
            {
                continue;
            }
            myQ.push(child);
            visited[child] = true;
            dist[child] = dist[dlt] + 1;
        }
    }
}
void solve()
{
    int e, all;
    cin >> e >> all;
    vector<int> src;
    for (int i = 0; i < all; i++)
    {
        int x;
        cin >> x;
        src.push_back(x);
    }
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> ans;
    for (int i = 0; i < all; i++)
    {
        int mainsrc = src[i];
        for (int j = 0; j < all; j++)
        {
            int des = src[j];
            if (i == j)
                continue;
            for (int i = 0; i < N; i++)
            {
                visited[i] = false;
                dist[i] = 0;
            }
            bfs(mainsrc);
            if (visited[des])
                ans.push_back(dist[des]);
        }
    }
    sort(ans.begin(),ans.end());
    cout<<ans[0]<<endl;
}
int main()
{
    int t;
    cin >> t;
    // t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}