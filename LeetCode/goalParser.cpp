class Solution {
public:
    string interpret(string s) {
        string n1;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' && s[i+1]==')'){
                n1.push_back('o');
                i++;
            }
            else if(s[i]=='(' && s[i+1]=='a' && s[i+2]=='l' && s[i+3]==')'){
                n1.push_back('a');
                n1.push_back('l');
                i+=3;
            }else{
                n1.push_back('G');
            }
        }
        return n1;
    }
};