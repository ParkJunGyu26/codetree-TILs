import java.util.*;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int blank = n-1;
        int out = 1;

        for (int i = 1; i <= (2*n)-1; i++) {
            if ( i <= n ) {
                for (int j = 1; j <= blank; j++) {
                    System.out.print("  ");
                }
                for (int j = 1; j <= out; j++) {
                    System.out.print("@ ");
                }
            } else {
                for (int j = 1; j <= out; j++) {
                    System.out.print("@ ");
                }
                for (int j = 1; j <= blank; j++) {
                    System.out.print(" ");
                }
            }
            if ( i < n ) {
                blank--;
                out++;
            } else {
                blank++;
                out--;;
            }
            System.out.println();
        }
    }
}