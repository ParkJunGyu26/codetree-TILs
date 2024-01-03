import java.util.*;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc = new Scanner(System.in);

        char per1, per2, per3;
        int temp1, temp2, temp3;
        int count = 0;

        per1 = sc.next().charAt(0);
        temp1 = sc.nextInt();

        per2 = sc.next().charAt(0);
        temp2 = sc.nextInt();

        per3 = sc.next().charAt(0);
        temp3 = sc.nextInt();

        if(per1 == 'Y' && temp1 >= 37) {
            count += 1;
        }

        if(per2 == 'Y' && temp2 >= 37) {
            count += 1;
        }

        if(per3 == 'Y' && temp3 >= 37) {
            count += 1;
        }

        if(count >= 2) {
            System.out.println("E");
        } else {
            System.out.println("N");
        }
    }
}