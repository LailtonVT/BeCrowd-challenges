import java.util.Scanner;

public class VariasNotasComValidacao {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int novoCalculo = 1;

        while (novoCalculo == 1) {
            double nota1 = -1;
            double nota2 = -1;

            // Ler a primeira nota válida
            while (nota1 < 0 || nota1 > 10) {
                nota1 = scanner.nextDouble();
                if (nota1 < 0 || nota1 > 10) {
                    System.out.println("nota invalida");
                }
            }

            // Ler a segunda nota válida
            while (nota2 < 0 || nota2 > 10) {
                nota2 = scanner.nextDouble();
                if (nota2 < 0 || nota2 > 10) {
                    System.out.println("nota invalida");
                }
            }

            // Calcular e imprimir a média
            double media = (nota1 + nota2) / 2;
            System.out.printf("media = %.2f%n", media);

            // Perguntar se deseja realizar um novo cálculo
            do {
                System.out.println("novo calculo (1-sim 2-nao)");
                novoCalculo = scanner.nextInt();
            } while (novoCalculo != 1 && novoCalculo != 2);
        }

        scanner.close();
    }
}