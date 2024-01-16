import java.util.*;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int i = 1;
        int cnt = 0;

        int[] arr = new int[100];
        
        while (true) {
            arr[i-1] = n * i;
            System.out.print(arr[i-1] + " ");
            if (arr[i-1] % 5 == 0) {
                cnt++;
            }
            if (cnt == 2) break;
            i++;
        }
    }
}