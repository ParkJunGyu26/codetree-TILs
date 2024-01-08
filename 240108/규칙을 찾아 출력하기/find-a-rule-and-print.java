import java.util.*;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int star = 1;

        for (int i = 1; i <= n; i++) {
            if (i == 1 || i == n) {
                for (int j = 1; j <= n; j++) {
                    System.out.print("* ");
                }
            } else {
                for (int j = 1; j < star; j++) {
                    System.out.print("* ");
                }
                for (int j = 1; j <= n-star; j++) {
                    System.out.print("  ");
                }
                System.out.print("*");
            }
            star++;
            System.out.println();
        }
    }
}