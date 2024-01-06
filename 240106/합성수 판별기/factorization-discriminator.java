import java.util.*;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        boolean satisfied = false;
        int cnt = 0;
        for (int i = 1; i < n; i++) {
            if (n % i == 0) cnt ++;
        }
        System.out.print(cnt > 1 ? "C" : "N");
    }
}