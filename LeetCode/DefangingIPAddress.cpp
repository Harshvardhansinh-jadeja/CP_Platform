class Solution {
public:
    string defangIPaddr(string address) {
        string new1;
        for(auto &i:address)
        {
            if(i== '.')
            {
                new1.push_back('[');
                new1.push_back('.');
                new1.push_back(']');
            }
            else{
                new1.push_back(i);
            }
        }
        return new1;
    }
};