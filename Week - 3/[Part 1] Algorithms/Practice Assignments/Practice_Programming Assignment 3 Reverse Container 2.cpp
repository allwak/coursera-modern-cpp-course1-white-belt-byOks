vector<int> Reversed(const vector<int>& v) {
    auto a = v;
    int n = a.size;
    for(int i = 0; i <= n/2; ++i) {
        int tmp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = tmp;
    }
    return a;
}