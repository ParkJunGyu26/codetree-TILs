import java.util.*;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc = new Scanner(System.in);
        int[] stu = new int[100];
        int[] countStu = new int[11];
        int check = 0;

        for (int i = 0; i < 100; i++) {
            int score = sc.nextInt();
            if (score == 0) {
                break;
            }
            if (score < 10) continue;

            countStu[(score / 10)]++;
        }

        for (int i = 100; i >= 10; i -= 10) {
            System.out.println( i + " - " + countStu[i / 10]);
        }
    }
}