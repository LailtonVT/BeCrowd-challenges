import java.util.Scanner;

public class ValidacaoDeNota {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double nota = 0;
        double soma = 0;
        int contador = 0;
        while (contador < 2) {
            nota = sc.nextDouble();
            if (nota < 0 || nota > 10) {
                System.out.println("nota invalida");
            } else {
                soma += nota;
                contador++;
            }
        }
        System.out.println("media = " + String.format("%.2f", soma / 2));
        sc.close();
    }
}


