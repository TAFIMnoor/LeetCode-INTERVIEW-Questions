class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(int i=0,k=0; i<nums.size(); i++){
            int flag=1;
            if(nums[i]!=k){
                for(int j=i+1; j<nums.size(); j++){
                    if(k==nums[j])
                        swap(nums[i],nums[j]),flag=0;
                }
                if(flag) k++,i--;
            }
        }
    }
};
