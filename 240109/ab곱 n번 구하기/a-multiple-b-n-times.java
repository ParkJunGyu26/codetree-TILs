import java.util.*;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc = new Scanner(System.in);
        int n, a, b;
        n = sc.nextInt();

        for (int i = 1; i <= n; i++) {
            int ans = 1;

            a = sc.nextInt();
            b = sc.nextInt();

            for (int j = a; j <= b; j++) ans *= j;
            System.out.println(ans);
        }
    }
}