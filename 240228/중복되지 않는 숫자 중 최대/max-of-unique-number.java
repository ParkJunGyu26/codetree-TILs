import java.util.*;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc = new Scanner(System.in);
        final int MIN = Integer.MIN_VALUE;
        int n = sc.nextInt();
        int[] nums = new int[n];

        int maxNum = MIN;
        int cnt = 0;
        
        for (int i = 0; i < n; i++) nums[i] = sc.nextInt();
        for (int i = 0; i < n; i++) {
            if (maxNum < nums[i]) {
                maxNum = nums[i];
                cnt = 0;
            }
            if (maxNum == nums[i]) {
                cnt++;
            }
            if (cnt > 1) {
                cnt = 0;
                maxNum = MIN;
            }
        }

        System.out.print(maxNum == MIN ? -1 : maxNum);
    }
}