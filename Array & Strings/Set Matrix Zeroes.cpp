class Solution {
public:
    void setZeroes(vector<vector<int>>& m) {
        
        vector<pair<int,int>> p;
        
        for(int i=0; i<m.size(); i++){
            for(int j=0; j<m[i].size(); j++){
                if(m[i][j]==0)
                    p.push_back({i,j});
            }
        }
        
        for(int i=0; i<p.size(); i++){
            
            int x=p[i].first,y=p[i].second;
            
            for(int j=0; j<m[x].size(); j++){
                m[x][j]=0;
            }
            for(int j=0; j<m.size(); j++){
                m[j][y]=0;
            }
        }
    }
};
