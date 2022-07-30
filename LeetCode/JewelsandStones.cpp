class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count=0;
        for(int i=0;i<jewels.length();i++)
            {
                for(int j=0;j<stones.length();j++){
                    if(int(jewels[i])==int(stones[j])){
                        count++;
                    }
                }
            }
        return count;
    }
};