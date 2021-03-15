void topological_sort(int u) {
    //cout<<(char)u<<endl;
    color[u] = true;
    for(int i = 0; i < graph[u].size(); i++) {
        //cout<<(char)graph[u][i]<<endl;
        if(!color[graph[u][i]]) {
            topological_sort(graph[u][i]);
        }
    }
    ans.push_back(u);
}
//just reverse the answer to get final output
