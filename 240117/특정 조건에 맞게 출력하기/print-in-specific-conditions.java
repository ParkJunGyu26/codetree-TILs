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

        for (int i = 0; i < 100; i++) {
            if (arr[i] == 0) break;
            if (arr[i] % 2 == 1) System.out.print(arr[i] + 3 + " ");
            else System.out.print(arr[i] / 2 + " ");
        }
    }
}