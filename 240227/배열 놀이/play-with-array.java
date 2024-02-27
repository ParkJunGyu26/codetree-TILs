import java.util.*;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc = new Scanner(System.in);
        int n, q;
        int[] intArray = new int[100];

        n = sc.nextInt();
        q = sc.nextInt();

        for (int i = 0; i < n; i++) {
            intArray[i] = sc.nextInt();
        }

        int type = 0;
        for (int i = 0; i < q; i++) {
            type = sc.nextInt();
            if (type == 1) {
                int a = sc.nextInt();
                System.out.println(intArray[a-1]);
            } else if (type == 2) {
                int a = sc.nextInt();
                boolean check = false;
                int ans = 0;
                for (int j = 0; j < n; j++) {
                    if (intArray[j] == a) {
                        check = true;
                        ans = j+1;
                        break;
                    }
                }
                System.out.println(check == true ? ans : 0);
            } else {
                int a = sc.nextInt();
                int b = sc.nextInt();
                for (int j = a-1; j < b; j++) {
                    System.out.print(intArray[j] + " ");
                }
            }
        }
    }
}