int sz[mx]; p[mx];

int get(int x) { return p[x]==x ? x : p[x]=get(p[x]); }

void unite(int x, int y) {
    x = get(x), y = get(y);
    if (x==y) return;
    if (sz[x]>sz[y]) swap(x, y);
    p[x]=y; sz[y]+=sz[x];
}
