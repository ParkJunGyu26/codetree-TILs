import java.util.*;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc = new Scanner(System.in);
        int start, end;
        int ans = 0;

        start = sc.nextInt();
        end = sc.nextInt();

        for (int i = start; i <= end; i++) {
            int cnt = 0;
            for (int j = 1; j <= i; j++) {
                if (i % j == 0) cnt++;
            }
            if (cnt == 3) ans++;
        }
        System.out.print(ans);
    }
}