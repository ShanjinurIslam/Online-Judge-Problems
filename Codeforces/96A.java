import java.util.Scanner ;
    public class Main {
        public static void main(String[] args) {
            Scanner a =  new Scanner(System.in) ;
            String x = a.nextLine() ;
            String p = "1111111" ;
            String q = "0000000" ;
            int  i= 0 ;
            int count = 0 ;
            while(i<x.length()-7+1){
                if(x.substring(i,i+7).equals(p) || x.substring(i,i+7).equals(q)){
                    System.out.print("YES");
                    count= 1;
                    break ;
                }
                else{
                    i++ ;
                }
            }

            if(count==0) {
                System.out.print("NO");
            }
        }
    }