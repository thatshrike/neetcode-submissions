class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
      vector<vector<int>> result;
      sort(nums.begin(), nums.end());
      for(int i = 0; i<nums.size(); i++){
        if(i==0 || (nums[i]!=nums[i-1])){
        int l = i+1, r = nums.size()-1;
        while(l<r){
          if(nums[l]+nums[r] > -nums[i] && r>l) r--;
          else if(nums[l]+nums[r] < -nums[i] && l<r) l++;
          else{
            result.emplace_back(vector<int>{nums[i], nums[l], nums[r]});
            l++;
            r--;
            while(l<r && nums[l]==nums[l-1]) l++;
            while(r>l && nums[r]==nums[r+1]) r--;
          }
        }
      }
      }
      return result;
    }
};
