import java.util.*;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc = new Scanner(System.in);
        int[] arr = new int[4];
        int cnt = 0;

        for (int i = 0; i < 3; i++) {
            char check = sc.next().charAt(0);
            int temp = sc.nextInt();

            if (check == 'N') {
                if (temp >= 37) arr[1]++;
                else arr[3]++; 
            } else {
                if (temp >= 37) {
                    arr[0]++;
                    cnt++;
                }
                else arr[2]++;
            }
        }

        for (int i = 0; i < 4; i++) {
            System.out.print(arr[i] + " ");
        }
        
        System.out.print(cnt >= 2 ? 'E' : ' ');
    }
}