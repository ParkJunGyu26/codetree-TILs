import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc = new Scanner(System.in);

        int a, b;

        a = sc.nextInt();
        b = sc.nextInt();

        if (a-b < 0) {
            System.out.println((a-b) * -1);
        } else {
            System.out.println(a-b);
        }
    }
}