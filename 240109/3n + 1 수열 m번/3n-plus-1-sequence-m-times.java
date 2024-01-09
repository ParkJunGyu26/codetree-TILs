import java.util.*;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc = new Scanner(System.in);
        int m = sc.nextInt();

        for (int i = 1; i <= m; i++) {
            int n = sc.nextInt();
            int ans = 0;

            while (n != 1) {
                if (n % 2 == 0) n /= 2;
                else n = (n*3)+1;
                ans ++;
            }

            System.out.println(ans);
        }
    }
}