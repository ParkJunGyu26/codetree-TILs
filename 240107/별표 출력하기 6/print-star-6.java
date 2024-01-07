import java.util.*;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int cnt = 0;

        for(int i = 1; i <= (2*n)-1; i++) {
            for(int j = 0; j < cnt; j++) {
                System.out.print("  ");
            }
            for(int j = 1; j <= (2*n) - (2*cnt) -1; j++) {
                System.out.print("* ");
            }
            System.out.println();
            if (i < n) cnt++;
            else cnt--;
        }
    }
}