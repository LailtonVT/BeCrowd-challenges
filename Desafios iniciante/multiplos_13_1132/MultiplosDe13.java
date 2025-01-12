import java.util.Scanner;

public class MultiplosDe13 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int y = sc.nextInt();
        int sum = 0;

        // Verifica se x é menor que y
        if(x > y) {
            int aux = x;
            x = y;
            y = aux;
        }

        // Soma os múltiplos de 13
        for(int i = x; i <= y; i++) {
            if(i % 13 != 0) {
                sum += i;
            }
        }

        // Exibe a soma
        System.out.println(sum);

        sc.close();
    }
}