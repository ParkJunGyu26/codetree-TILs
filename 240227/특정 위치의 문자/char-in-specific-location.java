import java.util.*;

public class Main {
    public static void main(String[] args) {
        char[] word = new char[]{'L', 'E', 'B', 'R', 'O', 'S'};
        Scanner sc = new Scanner(System.in);
        char character = sc.next().charAt(0);

        // 배열에 없는 경우엔 -1
        int num = -1;

        for (int i = 0; i < 6; i++) {
            if (word[i] == character) {
                num = i;
            }
        }

        System.out.print(num == -1 ? "None" : num);
    }
}