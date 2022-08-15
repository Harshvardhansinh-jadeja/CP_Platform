class Solution {
public:
    
    string longestCommonPrefix(vector<string>& strs) {
        int minl=INT_MAX;
        for(int i=0;i<strs.size();i++){
            if(minl> strs[i].length()){
                minl = strs[i].length();
            }
        }
        string result="";
        char current;
        for(int i=0;i<minl;i++){
            current = strs[0][i];
            for(int j=1;j<strs.size();j++){
                if(strs[j][i]!=current){
                    return result;
                }
            }
             result.push_back(current);
        }
        return result;
    }
};