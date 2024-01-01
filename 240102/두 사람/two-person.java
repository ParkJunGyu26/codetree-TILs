import java.util.*;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc = new Scanner(System.in);
        int a_age, b_age;
        char a_gen, b_gen;

        a_age = sc.nextInt();
        a_gen = sc.next().charAt(0);
        b_age = sc.nextInt();
        b_gen = sc.next().charAt(0);

        if (a_age >= 19 && a_gen == 'M' || b_age >= 19 && b_gen == 'M') {
            System.out.println(1);
        } else {
            System.out.println(0);
        }
    }
}