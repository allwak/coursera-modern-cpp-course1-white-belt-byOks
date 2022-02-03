void Reverse(vector<int>& v) {
    vector<int> a;
    for(int i = v.size()-1; i >= 0; i--) {
        a.push_back(v[i]);
    }
    v.clear();
    for(auto x: a) {
        v.push_back(x);
    }
}