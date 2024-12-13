struct Edge { int u, v, cost; bool operator<(const Edge& o) const { return cost < o.cost; } };

vi parent, rankk;
int find(int a) { return parent[a] == a ? a : parent[a] = find(parent[a]); }
bool merge(int a, int b) {
    if ((a = find(a)) == (b = find(b))) return false;
    if (rankk[a] < rankk[b]) swap(a, b);
    parent[b] = a;
    if (rankk[a] == rankk[b]) rankk[a]++;
    return true;
}

void solve() {
    int n, m, ans = 0, cnt = 0;
    cin >> n >> m;
    vector<Edge> edges(m);
    for (auto& e : edges) cin >> e.u >> e.v >> e.cost, e.u--, e.v--;

    sort(edges.begin(), edges.end());
    parent.resize(n); iota(parent.begin(), parent.end(), 0);
    rankk.assign(n, 0);

    for (auto& e : edges) if (merge(e.u, e.v)) ans += e.cost, cnt++;
    if(cnt==n-1){
        cout<<ans<<nl;
    }
    else{
        cout<<"IMPOSSIBLE"<<nl;
    }
}