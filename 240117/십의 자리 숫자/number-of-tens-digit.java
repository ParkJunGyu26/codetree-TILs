import java.util.*;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc = new Scanner(System.in);
        int[] arr = new int[100];
        int[] countArr = new int[10];
        int check = 0;

        for (int i = 0; i < 100; i++) {
            int num = sc.nextInt();
            if (num == 0) {
                check = i;
                break;
            }
            arr[i] = num;
        }

        for (int i = 0; i < check; i++) {
            countArr[arr[i]/10]++;
        }

        for (int i = 1; i <= 9; i++) {
            System.out.println(i + " - " + countArr[i]);
        }
    }
}