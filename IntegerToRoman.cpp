class Solution {
public:
    string intToRoman(int num) {
        string s ="";
        
        int m = num/1000;
        if(m>0){
            while(m!=0)
            {
                    s.append("M");
                    m--;
            }
        }
        num -=((num/1000)*1000);
        if((num/100)==9){
            s.append("CM");
            num-=900;
        }
         if((num/100)==4){
            s.append("CD");
            num-=400;
        }
        
        int d =  num/500;
        if(d>0){
          while(d!=0){
              s.append("D");
              d--;
          }
        }
        num-=((num/500)*500);
        
        
        int c= num/100;
        if(c>0){
            while(c!=0)
            {
                    s.append("C");
                    c--;    
            }
        }
        num -=((num/100)*100);
        if((num/10)==9){
            s.append("XC");
            num-=90;
        }
         if((num/10)==4){
            s.append("XL");
            num-=40;
        }
        
        int l =  num/50;
        if(l>0){
          while(l!=0){
              s.append("L");
              l--;
          }
        }
        num-=((num/50)*50);
        
        
         int x= num/10;
        if(x>0){
            while(x!=0)
            {
                    s.append("X");
                    x--;    
            }
        }
        num -=((num/10)*10);
        if(num==9){
            s.append("IX");
            num-=9;
        }
         if(num==4){
            s.append("IV");
            num-=4;
        }
        
        int v =  num/5;
        if(v>0){
          while(v!=0){
              s.append("V");
              v--;
          }
        }
        num-=((num/5)*5);
        
        
        while(num!=0){
            s.append("I");
            num--;
        }
        
     return s;   
    }
};