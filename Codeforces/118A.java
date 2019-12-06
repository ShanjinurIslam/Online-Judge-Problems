import java.util.Scanner ;
public class Main {
    public static void main(String[] args) {
        Scanner x = new Scanner(System.in) ;
        String a = new String(x.nextLine()) ;
        String c = "" ;
        int i = 0 ;
        while (i<a.length()){
            String tem = a.substring(i,i+1) ;
            if(!tem.equals("a") && !tem.equals("e") && !tem.equals("i") && !tem.equals("o") && !tem.equals("y") && !tem.equals("u") && !tem.equals("A") && !tem.equals("E") && !tem.equals("I") && !tem.equals("O") && !tem.equals("Y") && !tem.equals("U"))
            {
                c+="." ;
                c += tem;
            }
            i++ ;
        }

        final String s = c.toLowerCase();
        System.out.print(s);
     }
}