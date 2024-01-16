import java.util.*;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];

        for (int i = 0; i < n; i++) {
            int num = sc.nextInt();
            if (num % 2 == 0) arr[i] = num;
        }

        for (int i = 1; i <= n; i++) {
            if (arr[n-i] == 0) continue;
            System.out.print(arr[n-i] + " ");
        }
    }
}