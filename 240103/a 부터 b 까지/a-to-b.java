import java.util.*;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc = new Scanner(System.in);
        int a, b, i;

        a = sc.nextInt();
        b = sc.nextInt();
        i = a;
        
        while (i <= b) {
            System.out.print(i + " ");
            if(i % 2 == 1) {
                i *= 2;
            }
            else {
                i += 3;
            }
        }
    }
}