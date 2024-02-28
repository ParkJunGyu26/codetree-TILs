import java.util.*;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc = new Scanner(System.in);
        int[] nums = new int[100];
        int minNum, maxNum;
        int i = 0;
        int cnt = 0;

        while (true) {
            int num = sc.nextInt();
            if (num == -999 || num == 999) break;
            nums[i] = num;
            i++;
        }

        minNum = nums[0];
        maxNum = nums[0];
        for (int j = 1; j < i; j++) {
            if (minNum > nums[j]) minNum = nums[j];
            if (maxNum < nums[j]) maxNum = nums[j];
        }

        System.out.print(maxNum + " " + minNum);
    }
}