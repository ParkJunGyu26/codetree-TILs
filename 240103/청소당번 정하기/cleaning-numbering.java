import java.util.*;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc = new Scanner(System.in);

        int in = 0, out = 0, bath = 0;
        int n = sc.nextInt();

        for (int i = 1; i <= n; i++) {
            if(i % 12 == 0) bath += 1;
            else if(i % 3 == 0) out += 1;
            else if(i % 2 == 0) in += 1;
        }

        System.out.print(in + " " + out + " " + bath);
    }
}