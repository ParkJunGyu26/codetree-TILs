import java.util.*;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc = new Scanner(System.in);
        int n, m;
        int cnt = 0;
        n = sc.nextInt();
        m = sc.nextInt();

        // 정수 배열 100개 선언
        int[] arr = new int[100];

        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
            if (arr[i] == m) {
                cnt++;
            }
        }
        System.out.print(cnt);
    }
}