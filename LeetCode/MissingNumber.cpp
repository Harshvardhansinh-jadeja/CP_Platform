//1st
class Solution {
public:
    int missingNumber(vector<int>& nums) {
      int n = nums.size();
        int actual = (n*(n+1))/2;
        int expect=0;
        for(int i=0;i<nums.size();i++){
            expect+=nums[i];
        }
        return actual-expect;
    }
};

//2nd
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i=0;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(i=0;i<nums.size();i++){
            if(nums[i]!=i){
                break;
            }
        }
        return i;
    }
};