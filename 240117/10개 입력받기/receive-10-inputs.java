import java.util.*;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc = new Scanner(System.in);
        int[] arr = new int[10];
        double sum = 0;
        int cnt = 0;

        for (int i = 0; i < 10; i++) {
            int num = sc.nextInt();
            if (num == 0) break;
            arr[i] = num;
            sum += arr[i];
            cnt += 1;
        }

        System.out.printf("%d %.1f", (int)sum, sum/cnt);
    }
}