import java.util.Scanner;

public class Grenais {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int novoGrenal = 1;
        int vitoriasInter = 0;
        int vitoriasGremio = 0;
        int empates = 0;
        int totalGrenais = 0;

        while (novoGrenal == 1) {
            int golsInter = scanner.nextInt();
            int golsGremio = scanner.nextInt();

            if (golsInter > golsGremio) {
                vitoriasInter++;
            } else if (golsGremio > golsInter) {
                vitoriasGremio++;
            } else {
                empates++;
            }

            totalGrenais++;

            do {
                System.out.println("Novo grenal (1-sim 2-nao)");
                novoGrenal = scanner.nextInt();
            } while (novoGrenal != 1 && novoGrenal != 2);
        }

        System.out.println(totalGrenais + " grenais");
        System.out.println("Inter:" + vitoriasInter);
        System.out.println("Gremio:" + vitoriasGremio);
        System.out.println("Empates:" + empates);

        if (vitoriasInter > vitoriasGremio) {
            System.out.println("Inter venceu mais");
        } else if (vitoriasGremio > vitoriasInter) {
            System.out.println("Gremio venceu mais");
        } else {
            System.out.println("Nao houve vencedor");
        }

        scanner.close();

    }
}
