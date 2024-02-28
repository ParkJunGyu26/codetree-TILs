import java.util.*;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] nums = new int[n];
 
        for (int i = 0; i < n; i++) {
            nums[i] = sc.nextInt();
        }
        int minNum = nums[0];

        for (int i = 1; i < n; i++) {
            if (minNum > nums[i]) {
                minNum = nums[i];
            }
        }

        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (minNum == nums[i]) {
                cnt++;
            }
        }

        System.out.print(minNum + " " + cnt);
    }
}