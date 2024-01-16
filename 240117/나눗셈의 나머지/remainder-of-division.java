import java.util.*;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc = new Scanner(System.in);
        int a, b;
        a = sc.nextInt();
        b = sc.nextInt();

        int[] arr = new int[10];

        while (a > 1) {
            int tmp = a % b;
            arr[tmp]++;
            a = a / b;
        }

        int ans = 0;

        for (int i = 0; i < 10 ; i++) {
            if (arr[i] > 0) ans += arr[i] * arr[i];
        }

        System.out.print(ans);
    }
}