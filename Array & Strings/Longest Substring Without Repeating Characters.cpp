class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        
        int a[256]={},ans=0,cnt=0;
        
        if(s==" "){
            return 1;
        }
        
        if((int)s[0]==0){
            return 0;
        }      
        for(int i=0; i<s.size(); i++){
            if(a[(int)s[i]]){
                ans=max(ans,cnt);
                cnt=1;
                fill(a,a+256,0);
                
            } else {
                cnt++;
            }
            a[(int)s[i]]=i+1;
        }
        return max(ans,cnt);
    }
};
