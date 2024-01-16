import java.util.*;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc = new Scanner(System.in);
        int arr[] = new int[10];
        int cnt = 0;

        for (int i = 0; i < 10; i++) {
            int num = sc.nextInt();
            if (num == 0) break;
            else {
                arr[i] = num;
                cnt += 1;
            }
        }


        for (int i = 1; i <= cnt; i++) {
            System.out.print(arr[cnt - i] + " ");
        }
    }
}