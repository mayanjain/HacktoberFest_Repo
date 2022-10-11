class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& s) {
        map<int,int>m;int c=0,d=0,k=0;
        for(auto i:s){
            c=i[1]-k;
            k=i[1];
            if(!m.count(c))
            m[c]=i[0];
            else m[c]=min(i[0],m[c]);
            d=max(c,d);
        }
        return m[d];
    }
};
