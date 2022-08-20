public class strstr1 {
    public static void main(String[] args){
        String s ="acb"; //acdcb
        String p = "a*c?b";
//        if(p.contains("?")){
//            System.out.println("YEs");
//        }
//        p.replace("?","\\w?");
            if(s.matches("a*c?b")){
                System.out.println("YES");
        }

    }
}
