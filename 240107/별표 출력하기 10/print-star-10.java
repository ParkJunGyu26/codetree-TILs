import java.util.*;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        for (int i = 1; i <= 2*n; i++) {
            if (i % 2 != 0) {
                for (int j = 1; j <= (i/2)+1; j++) {
                    System.out.print("* ");
                }
                System.out.println();
            } else {
                for (int j = 1; j <= n-(i/2)+1; j++) {
                    System.out.print("* ");
                }
                System.out.println();
            }
        }
    }
}