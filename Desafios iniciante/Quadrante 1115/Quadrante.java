import java.util.*;

public class Quadrante {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        while (true) {
            int x = sc.nextInt();
            int y = sc.nextInt();
            if (x == 0 || y == 0) {
                break;
            }else {
                if (x > 0 && y > 0) {
                    System.out.println("primeiro");
                }else if (x < 0 && y > 0) {
                    System.out.println("segundo");
                }else if (x < 0 && y < 0) {
                    System.out.println("terceiro");
                }else {
                    System.out.println("quarto");
                }
        
            }
        }
        sc.close();
    }
}
