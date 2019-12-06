import java.util.Scanner ;
public class Main {

    public static void main(String[] args) {
        int price , e ;
        Scanner x = new Scanner(System.in) ;
        price = x.nextInt() ;
        e = x.nextInt() ;
        int i = 1 ;
        while (true){
            if(i*price%10==0){
                System.out.println(i);
                return;
            }

            else if(((i*price)-e)%10==0){
                System.out.println(i);
                return ;
            }
            else{
                i++ ;
            }
        }
    }
}