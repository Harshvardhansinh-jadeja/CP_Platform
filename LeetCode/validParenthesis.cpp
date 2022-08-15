class Solution {
public:
    bool isValid(string s) {
        stack<char> p;
        for(int i=0;i<s.size();i++){
             if(s[i]== '(' || s[i]=='{' || s[i] == '['){
                p.push(s[i]);
            }
            
            else if(!p.empty()){
                 if( p.top() == '(' && s[i]==')' ){
               p.pop();
            }
            else if(  p.top() == '{' && s[i]=='}'){
                p.pop();
            }
            else if( p.top() =='[' && s[i]== ']'){
                p.pop();
            }
                else{
                    return false;
                }
            }
            else{
             return false;
            }
        }
        return p.empty();
    }
};