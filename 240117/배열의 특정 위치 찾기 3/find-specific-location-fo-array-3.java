import java.util.*;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc = new Scanner(System.in);
        int[] arr = new int[100];

        for (int i = 0; i < 100; i++) {
            int num = sc.nextInt();
            if (num == 0) break;
            arr[i] = num;
        }

        int cnt = 0;
        int sum = 0;

        for (int i = 0; i < 100; i++) {
            if (arr[i] == 0) {
                sum = arr[cnt-1] + arr[cnt-2] + arr[cnt-3];
                System.out.print(sum);
                break;
            }
            cnt += 1;
        }
    }
}