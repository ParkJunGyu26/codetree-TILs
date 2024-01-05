import java.util.*;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc = new Scanner(System.in);
        while(true) {
            int num = sc.nextInt();
            if (num == 25) {
                System.out.println("Good");
                break;
            }
            else if (num < 25) System.out.println("Higher");
            else System.out.println("Lower");
        }
    }
}