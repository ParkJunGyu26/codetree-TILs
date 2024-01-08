import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // 변수 선언 및 입력
        int n = sc.nextInt();

        // n칸의 정사각형에서 i, j가 조건에 맞으면 *을 출력합니다.
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(i > j || i == 0 || j == n - 1) System.out.print("* ");
                else System.out.print("  ");
            }
            System.out.println();
        }
    }
}