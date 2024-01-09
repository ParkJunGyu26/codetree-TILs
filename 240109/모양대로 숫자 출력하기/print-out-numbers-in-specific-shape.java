import java.util.*;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int blank = 0;
        int cnt = n;

        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < blank; j++) System.out.print("  ");

            for (int j = n-blank; j >= 1; j--) {
                System.out.print(j + " ");
            }
            blank++;
            System.out.println();
        }
    }
}