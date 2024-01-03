import java.util.*;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc = new Scanner(System.in);
        int sum = 0, cnt = 0;
        for (int i = 1; i <= 10; i++) {
            int num = sc.nextInt();
            if (0 <= num && num <= 200) {
                sum += num;
                cnt += 1;
            }
        }
        System.out.printf("%d %.1f", sum, (double)sum/cnt);
    }
}