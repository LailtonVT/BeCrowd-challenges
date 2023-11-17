import java.util.Scanner;

public class ParImpar {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt(); 

        for (int t = 0; t < T; t++) {
            int N = sc.nextInt();

            if (N > 0) {
                if (N % 2 == 0) {
                    System.out.println("EVEN POSITIVE");
                } else {
                    System.out.println("ODD POSITIVE");
                }
            } else if (N < 0) {
                if (N % 2 == 0) {
                    System.out.println("EVEN NEGATIVE");
                } else {
                    System.out.println("ODD NEGATIVE");
                }
            } else {
                System.out.println("NULL");
            }
        }
        sc.close();
    }
}
