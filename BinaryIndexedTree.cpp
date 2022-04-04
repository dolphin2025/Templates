int bit[mx];

void inc(int i, int v) { for (i++; i < mx; i += i & -i) bit[i] += v; }

int sum(int i) { int x = 0; for (; i; i -= i & -i) x += bit[i]; return x; } // not inclusive
