import java.util.*;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc = new Scanner(System.in);
        int a, n;

        a = sc.nextInt();
        n = sc.nextInt();

        for (int i = n; i <= n * n; i += n) {
            System.out.println(a + i);
        }
    }
}