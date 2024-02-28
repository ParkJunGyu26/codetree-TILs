import java.util.*;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc = new Scanner(System.in);
        int[] nums = new int[10];

        for (int i = 0; i < 10; i++) {
            nums[i] = sc.nextInt();
        }
        int maxNum = nums[0];

        for (int i = 1; i < 10; i++) {
            if (maxNum < nums[i]) {
                maxNum = nums[i];
            }
        }

        System.out.println(maxNum);
    }
}