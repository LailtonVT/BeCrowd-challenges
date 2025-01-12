package resto_da_divisao_1133;

public class RestoDaDivisao {
    public static void main(String[] args) {
        java.util.Scanner in = new java.util.Scanner(System.in);
        int x = in.nextInt();
        int y = in.nextInt();
        int menor = Math.min(x, y);
        int maior = Math.max(x, y);
        for (int i = menor + 1; i < maior; i++) {
            if (i % 5 == 2 || i % 5 == 3) {
                System.out.println(i);
            }
        }
        in.close();
    }
}
