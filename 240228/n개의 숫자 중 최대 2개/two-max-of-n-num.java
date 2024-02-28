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

        int firstMax = Integer.MIN_VALUE;
        int check = 0;

        for(int i = 0; i < n; i++) {
            if (firstMax < nums[i]) {
                firstMax = nums[i];
                check = i;
            }
        }

        int secondMax = Integer.MIN_VALUE;

        for (int i = 0; i < n; i++) {
            if (check == i) continue;
            if (secondMax < nums[i]) secondMax = nums[i];
        }

        System.out.print(firstMax + " " + secondMax);
    }
}