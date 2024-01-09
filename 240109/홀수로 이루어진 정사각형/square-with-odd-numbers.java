import java.util.*;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        for (int i = 2; i <= n*2; i += 2) {
            for (int j = 9+i; j <= 9+i+(n*2)-1; j += 2) {
                System.out.print(j + " ");
            }
            System.out.println();
        }
    }
}