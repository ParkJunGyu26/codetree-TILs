import java.util.*;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc = new Scanner(System.in);
        int[] arr = new int[10];
        int sum_2 = 0;
        double sum_3 = 0;
        int cnt = 0;

        for (int i = 0; i < 10; i++) {
            arr[i] = sc.nextInt();
            if (i % 2 == 1) sum_2 += arr[i];
            if (i % 3 == 2) {
                sum_3 += arr[i];
                cnt += 1;
            }
        }

        System.out.printf("%d %.1f", sum_2, sum_3/cnt);
    }
}