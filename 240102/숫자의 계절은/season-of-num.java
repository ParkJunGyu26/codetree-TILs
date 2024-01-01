import java.util.*;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc = new Scanner(System.in);
        int m = sc.nextInt();

        if (m >= 9) {
            if (m <= 11) {
                System.out.println("Fall");
            } else {
                System.out.println("Winter");
            }
        } else {
            if (m >= 6 ) {
                System.out.println("Summer");
            } else if (m >= 3) {
                System.out.println("Spring");
            } else {
                System.out.println("Winter");
            }
        }
    }
}