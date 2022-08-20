class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x=0;
          map<int,int> m;
        for(auto &i:nums){
            m[i]++;
        }
        for(auto &v:m){
            if(v.second != 2){
                x= v.first;
            }
        }
        return x;
    }
};