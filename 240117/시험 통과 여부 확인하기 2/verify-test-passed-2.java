import java.util.*;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int cnt = 0;

        for (int i = 1; i <= n; i++) {
            int[] score = new int[4];
            int sum = 0;
            for (int j = 0; j < 4; j++) {
                score[j] = sc.nextInt();
                sum += score[j];
            }
            if (sum / 4 >= 60) {
                cnt += 1;
                System.out.println("pass");
            }
            else System.out.println("fail");
        }
        System.out.println(cnt);
    }
}