import java.util.*;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc = new Scanner(System.in);
        int n1, n2;
        n1 = sc.nextInt();
        n2 = sc.nextInt();

        int[] A = new int[n1];
        int[] B = new int[n2];

        for (int i = 0; i < n1; i++) {
            A[i] = sc.nextInt();
        }

        for (int i = 0; i < n2; i++) {
            B[i] = sc.nextInt();
        }

        int check = 0;
        int cnt = 0;
        boolean ans = false;

        for (int i = 0; i < n1; i++) {
            if (A[i] == B[check]) {
                check++;
                cnt++;
            } else {
                check = 0;
                cnt = 0;
            }

            if (cnt == n2) {
                ans = true;
                break;
            }
        }

        System.out.print(ans == true ? "Yes" : "No");
    }
}