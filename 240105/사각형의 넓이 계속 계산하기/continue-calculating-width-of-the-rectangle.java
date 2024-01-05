import java.util.*;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc = new Scanner(System.in);
        int row, column;
        char character;
        while (true) {
            column = sc.nextInt();
            row = sc.nextInt();
            character = sc.next().charAt(0);
            System.out.println(column * row);
            if (character == 'C') break;
        }
    }
}