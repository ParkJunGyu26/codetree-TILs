import java.util.*;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        char alpha = 'A';

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                if (alpha > 'Z') alpha = 'A';
                System.out.print(alpha);
                alpha++;
            }
            System.out.println();
        }
    }
}