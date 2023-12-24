import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc = new Scanner(System.in);

        int height, weight, bmi;

        height = sc.nextInt();
        double meter = (double)height / (double)100;

        weight = sc.nextInt();

        bmi = (int)(weight / (meter * meter));

        System.out.println(bmi);
        if ( bmi >= 25 ) {
            System.out.println("Obesity");
        }
    }
}