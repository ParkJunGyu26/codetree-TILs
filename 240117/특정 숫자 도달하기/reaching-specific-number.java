import java.util.*;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc = new Scanner(System.in);
        int[] arr = new int[10];
        int sum, cnt;
        sum = 0;
        cnt = 0;

        for (int i = 0; i < 10; i++) {
            arr[i] = sc.nextInt();
            if (arr[i] < 250) {
                sum += arr[i];
                cnt += 1;
            } else if (arr[i] >= 250) break;
        }

        System.out.printf("%d %.1f", sum, (double)sum/cnt);
    }
}