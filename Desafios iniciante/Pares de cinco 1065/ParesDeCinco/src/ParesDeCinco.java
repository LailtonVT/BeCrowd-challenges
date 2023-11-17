import java.util.Scanner;

public class ParesDeCinco {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        int contadorPares = 0;

        int[] valores = new int[5];

        for(int i = 0; i < 5; i++){
            valores[i] = sc.nextInt();
        }
        for(int i = 0; i < 5; i++){
            if(valores[i] % 2 == 0){
                contadorPares++;
            }
        }
        System.out.println(contadorPares + " valores pares\n");

        sc.close();
    }
}
