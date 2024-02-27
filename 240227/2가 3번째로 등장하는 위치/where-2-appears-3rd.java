import java.util.*;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] intArray = new int[n];

        for (int i = 0; i < n; i++) {
            intArray[i] = sc.nextInt();
        }

        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (intArray[i] == 2) {
                cnt++;
            }
            if (cnt == 3) {
                System.out.println(i+1);
                break;
            }
        }

    }
}