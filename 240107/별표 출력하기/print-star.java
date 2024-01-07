import java.util.*;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int cnt = 1;

        for (int i = 1; i <= (n*2)-1; i++) {
            for (int j = 1; j <= cnt; j++) {
                System.out.print("* ");
            }
            if (i < n) cnt++;
            else cnt --;
            System.out.println();
        }
    }
}