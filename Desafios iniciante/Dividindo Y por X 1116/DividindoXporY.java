import java.util.*;

public class DividindoXporY {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        while (n != 0) {
            double x = sc.nextDouble();
            double y = sc.nextDouble();
            if (y == 0) {
                System.out.println("divisao impossivel");
            }else {
                System.out.println(String.format("%.1f", x / y));
            }
            n--;
        }
        sc.close();
    }
}
