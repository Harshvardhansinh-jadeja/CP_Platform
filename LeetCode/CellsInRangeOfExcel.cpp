class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string> ans;
        char row1 = s[0],row2 = s[3];
        int col1 = s[1]-'0' ,col2 = s[4]-'0';
        for(char i=row1;i<=row2;i++){
            string temp;
            temp.push_back(i);
            for(int j=col1;j<=col2;j++){
                temp.push_back(j+'0');
                ans.push_back(temp);
                temp.pop_back();
            }
            temp.pop_back();
        }
        return ans;
    }
};