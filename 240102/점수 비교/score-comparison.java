import java.util.*;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc = new Scanner(System.in);

        int A_math, A_eng, B_math, B_eng;
        A_math = sc.nextInt();
        A_eng = sc.nextInt();
        B_math = sc.nextInt();
        B_eng = sc.nextInt();

        System.out.println(A_math > B_math && A_eng > B_eng ? 1 : 0);
    }
}