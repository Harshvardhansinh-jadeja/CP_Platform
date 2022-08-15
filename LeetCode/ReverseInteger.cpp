class Solution {
public:
    int reverse(int x) {
    
        int reversed=0,remainder;
        while(x!=0){
            remainder=x%10;
            
              if(reversed >INT32_MAX/10 || reversed <INT32_MIN/10){
                return 0;
             }
            reversed= reversed*10 + remainder; 
            x/=10;
        }
     
        return reversed;
    }
};