import java.util.*;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc = new Scanner(System.in);
        int cnt = 0;
        while (true) {
            int num = sc.nextInt();
            if (num % 2 == 0) {
                cnt += 1;
                System.out.println(num/2);
            }
            if (cnt == 3) break;
        }
    }
}