import java.util.*;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        
        for (int i = 1; i <= n; i++) {
            for (int j = i*n; j >= i; j -= i) {
                System.out.print(j + " ");
            }
            System.out.println();
        }
    }
}