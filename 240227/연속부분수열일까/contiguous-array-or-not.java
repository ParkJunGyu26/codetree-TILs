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

        boolean check = false;
        // 두 배열 비교
        for (int i = 0; i < n1; i++) {
            for (int j = 0; j < n2; j++) {
                if (A[i] != B[j]) {
                    check = false;
                    break;
                }
                if (A[i] == B[j]) {
                    check = true;
                }
            }
            if (check == true) break;
        }

        System.out.print(check == true ? "Yes" : "No");
    }
}