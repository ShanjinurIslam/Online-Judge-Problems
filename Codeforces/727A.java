import java.util.Scanner ;
public class Main {
    public static void main(String[] args) {
        int a , b ;
        int value[] = new int[1000] ;
        Scanner x = new Scanner(System.in) ;
        a = x.nextInt() ;
        b = x.nextInt() ;
        value[0] = b ;
        int ide = -1 ;
        int j = 1 ;
        while(b>=a){
            if(b%2==0){
                b = b/2 ;
                value[j++] = b ;
            }
            else{
                int k = b%10 ;
                b = b/10 ;
                value[j++] = b ;
                if(k!=1){
                    ide = -1 ;
                    break ;
                }
            }

            if(a==b){
                ide= 1 ;
                break ;
            }
        }
        if(ide==1){
            int i = j-1 ;
            System.out.println("YES");
            System.out.println(i+1);
            while (i>=0){
                System.out.print(value[i]+" ");
                i-- ;
            }
        }
        else if(ide!=1){
            System.out.print("NO");
        }
    }
}