class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        string s,t;
        set<string> st;
        unordered_map<string,vector<string>> m;
        
        for(int i=0; i<strs.size(); i++){
            s = strs[i];
            t=s;
            sort(s.begin(),s.end());
            m[s].push_back(t);
            st.insert(s);
        }
        
        vector<vector<string>> ans;
        
        for(auto it:st){
            ans.push_back(m[it]);
        }
        
        return ans;
    }
};
