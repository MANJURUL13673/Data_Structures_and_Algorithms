//identify cycle in directed graph

bool detectCycle(int u, bool *reVisit) {
    //cout<<(char)u<<endl;
    if(color[u] && reVisit[u]) {
        return true;
    }
    else if(color[u]) {
        return false;
    }
    color[u] = true;
    reVisit[u] = true;
    bool ans = false;
    for(int i = 0; i < graph[u].size(); i++) {
        ans = ans | detectCycle(graph[u][i], reVisit);
        if(ans) {
            return true;
        }
    }
    reVisit[u] = false;
    return ans;
}
//every time re initailize reVisit array when first call
