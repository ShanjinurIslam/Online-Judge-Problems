import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in) ;
        String input = s.nextLine() ;
        String[] val = input.split("\\+") ;
        ArrayList<Integer> x = new ArrayList<>() ;
        int i ;
        for (i=0;i<val.length;i++){
            x.add(Integer.parseInt(val[i])) ;
        }

        Collections.sort(x);

        int size = x.size() ;

        for (int j = 1; j <= size; j++) {
            System.out.print(x.get(j-1));
            if(j!=size){
                System.out.print("+");
            }
        }

    }
}