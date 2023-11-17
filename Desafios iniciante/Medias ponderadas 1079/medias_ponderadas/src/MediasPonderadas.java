import java.util.Scanner;

public class MediasPonderadas {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        
        int N = sc.nextInt();

        for(int i = 0; i < N; i++){
            double valor1 = sc.nextDouble();
            double valor2 = sc.nextDouble();
            double valor3 = sc.nextDouble();

            double mediaPonderada = (valor1 * 2 + valor2 * 3 + valor3 * 5) / 10;

            System.out.printf("%.1f\n", mediaPonderada);
        }

        sc.close();
    }
}
