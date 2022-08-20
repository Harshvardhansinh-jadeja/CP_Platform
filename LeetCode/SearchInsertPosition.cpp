class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int start=0,end=nums.size();
        int mid = (start + end)/2;
        while(start<=end){
            if(start==nums.size() && end==nums.size()){
                return start;
            }
            int mid = (start + end)/2;
        if(nums[mid]== target){
            return mid;
        }
        else if(nums[mid]<target){
                start =mid+1;
        }
        else{
                end = mid-1;  
            }
        }
       return start;
    }
};



//2nd code
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i=0;
        while(target>nums[i]){
            if(i+1==nums.size()){
                i++;
                break;
            }
            i++;
        }
        return i;
    }
};