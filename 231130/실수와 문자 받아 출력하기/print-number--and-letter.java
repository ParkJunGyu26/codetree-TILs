import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc = new Scanner(System.in);
        String c = sc.next();
        Double a = sc.nextDouble();
        Double b = sc.nextDouble();
        System.out.println(c);
        System.out.printf("%.2f\n", a);
        System.out.printf("%.2f", b);
    }
}