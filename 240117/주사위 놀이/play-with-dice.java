import java.util.*;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc = new Scanner(System.in);
        int[] arr = new int[11];
        int[] countArr = new int[7];

        for (int i = 1; i <= 10; i++) {
            arr[i] = sc.nextInt();
        }

        for (int i = 1; i <= 10; i++) {
            countArr[arr[i]]++;
        }

        for (int i = 1; i <= 6; i++) {
            System.out.println(i + " - " + countArr[i]);
        }
    }
}