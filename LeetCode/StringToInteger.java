public class StringToInteger {
    public static void main(String[] args){
        String s = "  words  -42 in  woords";
        String t = s.trim();
        String res[] = t.split("\\w");
        System.out.println( " " + res[1]);
    }
}
