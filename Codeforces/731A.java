import java.util.Scanner;

public class Main {
    static int totalMove(String x){
        char a[] = x.toCharArray() ;
        int prev = 'a' ;
        int i = 0 ;
        int total = 0 ;
        while (i<x.length()){
            int next = a[i] ;
            int c= Math.abs(next-prev) ;
            if(c>13){
                total += (26-c) ;
            }
            else{
                total += c ;
            }
            prev = next ;
            i++ ;
        }

        return total ;
    }
    public static void main(String[] args) {
	    String a = new String() ;
        Scanner x = new Scanner(System.in) ;
        a= x.nextLine() ;
        String target= a.toLowerCase() ;
        int total = totalMove(target) ;
        System.out.print(total);
    }
}