import java.util.*;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int blank = 0;
        int cnt = 1;

        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < blank; j++) System.out.print("  ");
            for (int j = 1; j <= n - blank; j++) {
                if (cnt > 9) cnt = 1;
                System.out.print(cnt + " ");
                cnt++;
            }
            blank++;
            System.out.println();
        }
    }
}