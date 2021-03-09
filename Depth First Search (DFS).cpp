#include <bits/stdc++.h>
using namespace std;

int n; //number of edge;
vector< vector<int> >adj(1001);
vector<bool>visited(1001);
vector<int>node;

void dfs(int v) {
    visited[v] = true;
    node.push_back(v);
    for(int i = 0; i < adj[v].size(); i++) {
        if(!visited[adj[v][i]]) {
            dfs(adj[v][i]);
        }
    }
}

int main()
{
    adj[1].push_back(7);
    adj[3].push_back(5);
    adj[1].push_back(5);
    adj[1].push_back(3);
    adj[3].push_back(4);
    adj[5].push_back(6);
    adj[7].push_back(8);
    dfs(1);
    for(int i = 0; i < node.size(); i++) {
        cout<<node[i]<<endl;
    }
    return 0;
}
