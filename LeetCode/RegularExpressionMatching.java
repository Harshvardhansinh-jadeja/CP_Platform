import java.util.*;
public class RegularExpressionMatching {
    public static boolean isMatch(String s, String p) {
        return s.matches(p);
    }
    public static void main(String[] args){
        Scanner sc=  new Scanner(System.in);
        String s = sc.next();
        String p = sc.next();
        System.out.println(isMatch(s,p));
    }
}
