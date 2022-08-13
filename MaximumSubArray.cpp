class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0,best=INT_MIN;
       for(int i=0;i<nums.size();i++){
           sum = max(nums[i],sum+nums[i]);
           best = max(best,sum);
       }
        return best;
    }
};


With O(n^2)
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int best=0;
        for(int i=0;i<nums.size();i++){
            int sum=0;
            for(int j=i;j<nums.size();j++){
                sum+= nums[j];
                best = max(sum,best);
            }
        }
        return best;
    }
};