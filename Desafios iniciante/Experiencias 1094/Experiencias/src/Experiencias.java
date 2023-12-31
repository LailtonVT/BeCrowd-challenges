import java.util.Scanner;

public class Experiencias {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int totalCobaias = 0;
        int totalCoelhos = 0;
        int totalRatos = 0;
        int totalSapos = 0;

        if (N < 1 || N > 15){
            N = 1;
        }

        for(int i = 0; i < N; i++){
            int quantidade = sc.nextInt();
            char tipo = sc.next().charAt(0);

            totalCobaias += quantidade;

            switch (tipo){
                case 'C':
                    totalCoelhos += quantidade;
                    break;
                case 'R':
                    totalRatos += quantidade;
                    break;
                case 'S':
                    totalSapos += quantidade;
                    break;
                default:
                    break;
            }
        }
        
        System.out.println("Total: " + totalCobaias + " cobaias");
        System.out.println("Total de coelhos: " + totalCoelhos);
        System.out.println("Total de ratos: " + totalRatos);
        System.out.println("Total de sapos: " + totalSapos);

        System.out.printf("Percentual de coelhos: %.2f %%\n", (totalCoelhos * 100.0 / totalCobaias));
        System.out.printf("Percentual de ratos: %.2f %%\n", (totalRatos * 100.0 / totalCobaias));
        System.out.printf("Percentual de sapos: %.2f %%\n", (totalSapos * 100.0 / totalCobaias));

        sc.close();
    }
}
