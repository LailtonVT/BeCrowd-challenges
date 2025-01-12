import java.util.Scanner;

public class QuadradoAoCubo {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;

        do {
            n = sc.nextInt();
        } while (n < 1 || n > 1000);

        for (int i = 1; i <= n; i++) {
            System.out.println(i + " " + (i * i) + " " + (i * i * i));
        }

        sc.close();
    }
}