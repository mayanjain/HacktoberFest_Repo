class Solution {
public:
    vector<int> findArray(vector<int>& p) {
        vector<int>v;
        v.push_back(p[0]);
        for(int i=1;i<p.size();i++){
            v.push_back(p[i-1]^p[i]);
        }
        return v;
    }
};
