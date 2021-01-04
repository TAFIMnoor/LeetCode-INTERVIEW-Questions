class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size(); long long m=LLONG_MIN;
        
        for(int i=0,cnt=0; i<n; i++){
            if(nums[i]>m){
                m=nums[i],cnt++;
            }
            else{
              if(cnt==2){
                  int x=i-1,y=i+1,cnt1=0,l=m;
                  while(x>=0 || y<n){
                      if(x>=0 && nums[x]<l){
                          l=nums[x--],cnt1++;
                          if(cnt1>=2){
                              return true;
                          }
                      }
                      else x--;
                      if(y<n && nums[y]>m){
                          return true;
                      }
                      else y++;
                  }
              }
               m=nums[i],cnt=1; 
            }
            if(cnt>=3)
                return true;
        }
        return false;
    }
};
