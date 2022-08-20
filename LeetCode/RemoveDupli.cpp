class Solution {
public:
    int lengthOfLastWord(string s) {   
        int j=s.size()-1;
        while(s[j]== ' '){
            j--;
        }
        int count=0;
        for(int i=j;i>=0;i--){
            if(s[i]==' '){
                break;
            }
            count++;
        }
        return count;
    }
};