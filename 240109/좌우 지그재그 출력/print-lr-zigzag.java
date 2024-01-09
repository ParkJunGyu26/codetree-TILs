import java.util.*;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                for (int j = (i*n)+1; j <= (i+1)*n; j++) System.out.print(j + " ");
            } else {
                for (int j = (i+1)*n; j >= (i*n)+1; j--) System.out.print(j + " ");
            }
            System.out.println();
        }
    }
}